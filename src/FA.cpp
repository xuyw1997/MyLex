//
// Created by Logan Xu on 2018/11/1.
//

#include "FA.h"
#include "util.h"
#include <queue>
#include <iostream>
#include <set>

using namespace std;



void FA::addNode(int i) {
    if(!edges.count(i)){
        edges[i] = vector<edge>();
    }
}
void FA::addEdge(int start, int end, char value) {
    if(edges.count(start)&&edges.count(end)){
        edges[start].push_back(edge(value,end));
    }else{
        cout<<"node start|end not exist!"<<endl;
    }
}
FA FA::operator+(const FA &other) {
    FA res = *this;
    FA other_copy = other;
    other_copy.edges[res.endNode] = vector<edge>();
    vector<edge>& oldEdges = other_copy.edges[other_copy.startNode];
    other_copy.addNode(endNode);
    for(vei it = oldEdges.begin(); it!=oldEdges.end();it++){
        other_copy.edges[endNode].push_back(*it);
    }
    other_copy.edges.erase(other_copy.startNode);
    for(mvi it = other_copy.edges.begin();it!=other_copy.edges.end();it++){
        res.edges[it->first]=it->second;
    }
    res.endNode = other_copy.endNode;
    return res;
}
FA FA::operator|(const FA &other) {
    FA res = * this;
    int start = getId(),end = getId();
    for( mvi  it = other.edges.begin();it!=other.edges.end();it++){
        res.edges[it->first]=it->second;
    }
    res.edges[start]=vector<edge>();
    res.edges[end] = vector<edge>();
    res.edges[start].push_back(edge(EPSILON,this->startNode));
    res.edges[start].push_back(edge(EPSILON,other.startNode));
    res.edges[this->endNode].push_back(edge(EPSILON,end));
    res.edges[other.endNode].push_back(edge(EPSILON,end));
    res.startNode = start;
    res.endNode = end;
    return res;

}
FA FA::closure() {
    FA res = *this;
    int start = getId(),end = getId();
    res.edges[start]=vector<edge>();
    res.edges[end] = vector<edge>();
    res.edges[start].push_back(edge(EPSILON,this->startNode));
    res.edges[start].push_back(edge(EPSILON,end));
    res.edges[this->endNode].push_back(edge(EPSILON,end));
    res.edges[this->endNode].push_back(edge(EPSILON,this->startNode));
    res.startNode = start;
    res.endNode = end;
    return res;
}
vector<int> FA::findEpsilonClosure(const vector<int>& nodes) {
    vector<int> res;
    set<int> visited;
    queue<int> left;
    int len = nodes.size();
    for(int i=0;i<len;i++)
        left.push(nodes[i]);
    while(!left.empty()){
        int cur = left.front();left.pop();
        if(cur == 33)
            cout<<"find macro"<<endl;
        res.push_back(cur);
        for(vei it = edges[cur].begin();it!=edges[cur].end();it++){
            if(it->value==EPSILON && !visited.count(it->dest)){
                visited.insert(it->dest);
                left.push(it->dest);
            }

        }
    }
    return res;
}

vector<int> FA::subSetConstruct(const vector<int> &nodes, char edgeValue) {
    set<int> s;
    int len = nodes.size();
    for(int i=0;i<len;i++){
        for(vei it = edges[nodes[i]].begin();it!=edges[nodes[i]].end();it++){
            if(it->value == edgeValue){
                s.insert(it->dest);
            }
        }
    }
    vector<int> res;
    for(set<int>::iterator it = s.begin();it!=s.end();it++)
        res.push_back(*it);
    return res;

}