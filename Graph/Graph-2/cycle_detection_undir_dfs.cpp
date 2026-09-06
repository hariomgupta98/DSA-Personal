#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbor = l[u];
            cout<<u<<" : ";
            for(int v : neighbor){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    bool undirCycleHelper(int src, int parent, vector<bool> &vis){
        vis[src] = true;
        list<int> neighbors = l[src];
        for(int v : neighbors){
            if(!vis[v]){
                if(undirCycleHelper(v, src, vis)){
                    return true;
                }
            }else{
                if(v != parent){
                    cout<<"In which exist cycle\n";
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycleUndir(){
        vector<bool> vis(V, false);
        return undirCycleHelper(0, -1, vis); //parent => -1
    }
};
int main(){
    int V = 5;
    Graph graph(V);
    // undirected graph
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);
    cout<<graph.isCycleUndir()<<endl;
    return 0;
}