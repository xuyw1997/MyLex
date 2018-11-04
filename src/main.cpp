#include <iostream>
#include <queue>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include "FA.h"
#include "util.h"
#include <map>
#include <set>
#include <algorithm>
#define INDENT_3 "            "
#define INDENT_4 "                "
using namespace std;

map<string,string> res;
map<char,int> op_priority={{'(',100},{'*',2},{'-',1},{'|',0}};
map<int,string> acceptNodes;
map<int,vector<string>> acceptDFANodes;
map<vector<int>,int> dfaNodes_m;
map<string,vector<int>> groups;
int belongTo[1000];
vector<int> dfaNodes_v[1000];
set<char> alphabet;

string getHash( FA& fa,int node){
    stringstream ss;
    for( auto it = fa.edges[node].begin();it!=fa.edges[node].end();it++){
        ss<<it->dest<<it->value;
    }
    if(acceptDFANodes.count(node))
        ss<<acceptDFANodes[node][0];
    return ss.str();
}

int main() {
    //set
    ifstream fin("my.l");
    string line,reId,re;
    // parse REs
    FA* mergedNFA = new FA();
    int start = getId();
    mergedNFA->addNode(start);
    mergedNFA->setStartNode(start);
    while(getline(fin,line)){
        if(line[0]=='#'||!line.length())
            continue;
        stringstream ss(line);
        ss>>reId;
        ss>>re;

        //pre-process
        string preProcessed,other;
        int len = re.length();
        for(int i=0;i<len;i++){
            switch (re[i]){
                case '{':
                    if(i-1>=0&&re[i-1]!='|'&&re[i-1]!='('&&re[i-1]!='\\')
                        preProcessed+='-';
                    other="";
                    while(re[++i]!='}') other+=re[i];

                    preProcessed+="("+res[other]+")";
                    break;
                case '[':
                    while(re[++i]!=']'){
                        char start = re[i];
                        char end = re[i+2];
                        for(char c=start;c<=end;c++){
                            if(c>start)
                                preProcessed+='|';
                            preProcessed+=c;
                        }
                        i+=2;
                        if(re[i+1]!=']')
                            preProcessed+='|';
                    }
                    break;
                default:
                    if(i-1>=0&&re[i-1]!='|'&&re[i-1]!='('&&re[i-1]!='\\'&&re[i]!='|'&&re[i]!='*'&&re[i]!=')')
                        preProcessed+='-';
                    if(re[i]=='\\')
                        preProcessed+=re[i++];
                    preProcessed+=re[i];

            }
        }
        res[reId]=preProcessed;
        cout<<preProcessed<<endl;
        //change infix re to postfix re
        stack<char> operators;
        string postfix;
        len = preProcessed.length();
        for(int i=0;i<len;i++){
            if(preProcessed[i]=='|'||preProcessed[i]=='*'||preProcessed[i]=='-'||preProcessed[i]=='('){
                if(!operators.empty()){
                    while(!operators.empty()&&op_priority[operators.top()]>=op_priority[preProcessed[i]]&&operators.top()!='('){
                        postfix+=operators.top();
                        operators.pop();
                    }
                    operators.push(preProcessed[i]);
                }else{
                    operators.push(preProcessed[i]);
                }
            } else if(preProcessed[i]==')'){
                while(!operators.empty()&&operators.top()!='('){
                    postfix+=operators.top();
                    operators.pop();
                }
                operators.pop();
            }else{
                if(preProcessed[i]=='\\'){
                    postfix+=preProcessed[i++];
                }

                postfix+=preProcessed[i];
            }
        }
        while(!operators.empty()){
            postfix+=operators.top();
            operators.pop();
        }
        cout<<postfix<<endl;
        //use Thompson's algorithm to construct NFAs
        stack<FA*> nfas;
        len = postfix.length();
        for(int i=0;i<len;i++){
            switch (postfix[i]){
                case '*':
                {
                    FA* a = nfas.top(); nfas.pop();
                    FA b = a->closure();
                    FA* c = new FA(b);
                    delete a;
                    nfas.push(c);
                }
                    break;
                case '|':
                {
                    FA* a = nfas.top(); nfas.pop();
                     FA* b = nfas.top(); nfas.pop();
                    FA c = *a|*b;
                    FA* d = new FA(c);
                    delete a;
                    delete b;
                    nfas.push(d);
                }
                    break;
                case '-':
                {
                    FA* a = nfas.top(); nfas.pop();
                    FA* b = nfas.top(); nfas.pop();
                    FA c = *b+*a;
                    FA* d = new FA(c);
                    delete a;
                    delete b;
                    nfas.push(d);
                }
                    break;
                case '\\':
                    i++;
                    {
                        int start = getId(),end = getId();
                        FA* nfa = new FA(start,end);
                        alphabet.insert(postfix[i]);
                        nfa->addEdge(start,end,postfix[i]);
                        nfas.push(nfa);
                    }
                    break;
                default:
                {
                    int start = getId(),end = getId();
                    FA* nfa = new FA(start,end);
                    char tar = postfix[i]=='.'?' ':postfix[i];
                    alphabet.insert(tar);
                    nfa->addEdge(start,end,tar);
                    nfas.push(nfa);
                }
                    break;
            }
        }

        acceptNodes[nfas.top()->getEndNode()] = reId;
        //merge NFAs to a big FA
        FA * nfa = nfas.top();
        for(mvi it = nfa->edges.begin();it!=nfa->edges.end();it++){
            mergedNFA->edges[it->first] = it->second;
        }
        mergedNFA->edges[mergedNFA->getStartNode()].push_back(edge(EPSILON,nfa->getStartNode()));
    }
    cout<<"mergedNFA_size: "<<mergedNFA->edges.size()<<endl;
    //translate the big NFA to DFA
    FA dfa;
    vector<int> I0Nodes = mergedNFA->findEpsilonClosure(vector<int>{mergedNFA->getStartNode()});
    int i0 = getDFAId();
    dfa.addNode(i0);
    dfa.setStartNode(i0);
    dfaNodes_m[I0Nodes] = i0;
    dfaNodes_v[i0] = I0Nodes;
    queue<int> INodes;
    INodes.push(i0);
    do{
        int Ix = INodes.front();INodes.pop();
        for(set<char>::iterator it = alphabet.begin();it!=alphabet.end();it++){
            vector<int> core = mergedNFA->subSetConstruct(dfaNodes_v[Ix],*it);
            if(!core.empty()){
                vector<int> epsilonClosure = mergedNFA->findEpsilonClosure(core);
                if(!dfaNodes_m.count(epsilonClosure)){
                    int dfaId = getDFAId();
                    dfaNodes_v[dfaId] = epsilonClosure;
                    dfaNodes_m[epsilonClosure] = dfaId;
                    INodes.push(dfaId);
                    dfa.addNode(dfaId);
                    dfa.addEdge(Ix,dfaId,*it);
                    for(map<int,string>::iterator itt = acceptNodes.begin();itt!=acceptNodes.end();itt++){
                        if(find(epsilonClosure.begin(),epsilonClosure.end(),itt->first)!=epsilonClosure.end()){
                            if(!acceptDFANodes.count(dfaId)){
                                acceptDFANodes[dfaId] = vector<string>();
                            }
                            acceptDFANodes[dfaId].push_back(itt->second);
                        }
                    }
                }else{
                    dfa.addEdge(Ix,dfaNodes_m[epsilonClosure],*it);
                }
            }

        }
    }while (!INodes.empty());
    cout<<dfa.edges.size();
    //rearrange priority of accepted REs of each accept Node
    for(map<int,vector<string>>::iterator it = acceptDFANodes.begin();it!=acceptDFANodes.end();it++){
        if(it->second[0]=="id"){
            it->second.erase(it->second.begin());
            it->second.push_back("id");
        }
        if(it->second[0]=="letter"){
            it->second.erase(it->second.begin());
            it->second.push_back("letter");
        }
        if(it->second[0]=="digit"){
            it->second.erase(it->second.begin());
            it->second.push_back("digit");
        }
    }
    //simplify the DFA
    for(mvi it = dfa.edges.begin();it!=dfa.edges.end();it++){
        string hash =  getHash(dfa,it->first);
        if(!groups.count(hash)){
            groups[hash] = vector<int>();
        }
        groups[hash].push_back(it->first);
        belongTo[it->first] = groups[hash].front();

    }
    for(mvi it = dfa.edges.begin();it!=dfa.edges.end();){
        if(belongTo[it->first]!=it->first)
            dfa.edges.erase(it++);
        else
            it++;
    }
    for(auto it = dfa.edges.begin();it!=dfa.edges.end();it++){
        for(auto itt = it->second.begin();itt!= it->second.end();itt++){
            if(belongTo[itt->dest]!=itt->dest)
                itt->dest = belongTo[itt->dest];
        }
    }
    cout<<"after simplify: "<<dfa.edges.size();
    //generate cpp source file
    //it: start  itt:dest
    ifstream tmpl("cpp.template");
    ofstream generate("parser.cpp");
    while(getline(tmpl,line)){
        if(line.length()>0&&line[0]=='$'){
            for(mvi it = dfa.edges.begin();it!=dfa.edges.end();it++){
                generate<<INDENT_3<<"case "<<it->first<<" :"<<endl;
                bool hasWild = false,first = true;
                int wildDest = 0;
                for(vei itt = it->second.begin();itt !=it->second.end();itt++){
                    if(itt->value==' '){
                        hasWild = true;
                        wildDest = itt->dest;
                    } else{
                        generate<<INDENT_4;
                        if(!first)
                            generate<<"else ";
                        first = false;
                        generate<<"if(cur == '"<<itt->value<<"'){"<<endl;
                        generate<<INDENT_4<<"state = "<<itt->dest<<"; lexeme += cur;"<<endl<<INDENT_4<<"}";
                    }
                }
                if(it->second.size()>0)
                    generate<<"else";
                generate<<"{"<<endl;
                if(hasWild){
                    generate<<INDENT_4<<"state = "<<wildDest<<";"<<endl;
                }else{
                    if(acceptDFANodes.count(it->first)){
                        generate<<INDENT_4<<"cout<<'$'<<\""<<acceptDFANodes[it->first][0]<<" lexeme: \" <<lexeme<<endl;";
                        generate<<"lexeme = \"\";"<<endl;
                        generate<<"state = 0;"<<endl;
                        generate<<"cin.unget();"<<endl;
                    }else{
                        generate<<"cout<<\"unable to parse word\"<<lexeme;"<<endl;
                        generate<<"return 0;"<<endl;
                    }

                }
                generate<<"}break;";
            }
        }else{
            generate<<line<<endl;
        }
    }
    tmpl.close();
    generate.close();

    return 0;
}