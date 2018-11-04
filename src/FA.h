//
// Created by Logan Xu on 2018/11/1.
//
#include <vector>
#include <map>
using namespace std;
#ifndef MYLEX_NFA_H
#define MYLEX_NFA_H


struct edge{
    char value;
    int dest;
    edge(char v,int d):value(v),dest(d){}
    bool operator<(const edge& e)const {
        if(dest == e.dest)
            return value<e.value;
        else
            return dest<e.dest;
    }
};

typedef map<int,vector<edge>>::const_iterator mvi;
typedef vector<edge>::const_iterator vei;

class FA {
public:
    int getStartNode(){ return startNode;}
    int getEndNode(){return endNode;}
    void setStartNode(int i){startNode = i;}
    void setEndNode(int i){endNode = i;}
    void addEdge(int start,int end,char value);
    void addNode(int i);
    FA operator+(const FA& other);
    FA operator|(const FA& other);
    FA closure();
    FA(int s,int e):startNode(s),endNode(e){edges[s] = vector<edge>();edges[e] = vector<edge>();}
    FA(){}
    map<int,vector<edge>> edges;
    vector<int> findEpsilonClosure(const vector<int>& nodes);
    vector<int> subSetConstruct(const vector<int>& nodes,char edgeValue);
private:
    int startNode;
    int endNode;
};


#endif //MYLEX_NFA_H
