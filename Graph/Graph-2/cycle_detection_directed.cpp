#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>* l;
    bool isUndir;
public:
    Graph(int V, bool isUndir){
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir){
            l[v].push_back(u);
        }
    }

    bool dirCycleHelper(int src, vector<bool> &vis, vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;
        list<int> neighbor = l[src];
        for(int v : neighbor){
            if(!vis[v]){
                if(dirCycleHelper(v, vis, recPath)){
                    return true;
                }
            }else{
                if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }

    bool isCycleDir(){
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dirCycleHelper(i, vis, recPath)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Graph graph(4, false);
    //directed graph
    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
    cout<<graph.isCycleDir()<<endl; //1
    return 0;
}