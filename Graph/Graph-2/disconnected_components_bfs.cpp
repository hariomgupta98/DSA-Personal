#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>*l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void bfsHelper(int st, vector<bool> &vis){
        queue<int> q;
        q.push(st);
        vis[st] = true;
        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";

            list<int> neighbors = l[curr];
            for(int neighbor : neighbors){
                if(!vis[neighbor]){
                    vis[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout<<endl;
    }

    void bfs(){
        vector<bool> vis(V, false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                bfsHelper(i, vis);
                cout<<endl;
            }
        }
    }
};
int main(){
    Graph graph(10);
    graph.addEdge(1,6);
    graph.addEdge(6,4);
    graph.addEdge(4,3);
    graph.addEdge(4,9);
    graph.addEdge(3,7);
    graph.addEdge(3,8);
    graph.addEdge(2,0);
    graph.addEdge(2,5);
    graph.bfs();
    return 0;
}