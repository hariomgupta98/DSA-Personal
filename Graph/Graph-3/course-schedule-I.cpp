#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
    bool isCycle(int src, vector<bool> &vis, vector<bool> &rec, vector<vector<int>> &graph){
        vis[src] = true;
        vis[src] = true;

        for(int i=0; i<graph.size(); i++){
            int u = graph[i][1];
            int v = graph[i][0];
            if(src == u){
                if(!vis[v]){
                    if(isCycle(v, vis, rec, graph)){
                        return true;
                    }
                }else{
                    if(rec[v]){
                        return true;
                    }
                }
            }
        }
        rec[src] = false;
        return false;
    }

    bool canFinish(int numCourse, vector<vector<int>> &graph){
        int V = numCourse;
        vector<bool> vis(V, false);
        vector<bool> rec(V, false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(isCycle(i, vis, rec, graph)){
                    return false;
                }
            }
        }
        return true;
    }
};
int main(){
    Graph g;
    vector<vector<int>> prerequesties = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
    int numCourses = 1;
    cout<<g.canFinish(numCourses, prerequesties);
    return 0;
}

//leetcode: 207 (medium)