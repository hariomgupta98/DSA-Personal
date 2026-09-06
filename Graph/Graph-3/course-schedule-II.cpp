#include<bits/stdc++.h>
using namespace std;

bool isCycle(int src, vector<bool> &rec, vector<bool> &vis, vector<vector<int>> &graph){
    vis[src] = true;
    rec[src] = true;
    for(int i=0; i<graph.size(); i++){
        int u = graph[i][1];
        int v = graph[i][0];
        if(u == src){
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
void topoSort(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>> &graph){
    vis[src] = true;
    for(int i=0; i<graph.size(); i++){
        int u = graph[i][1];
        int v = graph[i][0];
        if(u == src){
            if(!vis[v]){
                topoSort(v, vis, s, graph);
            }
        }
    }
    s.push(src);
}

vector<int> findOrder(int numCourse, vector<vector<int>> &graph){ //O(V + E)
    int V = numCourse;
    vector<bool> vis(V, false);
    vector<bool> rec(V, false);
    vector<int> ans;
    for(int i=0; i<V; i++){
        if(!vis[i]){
            if(isCycle(i, vis, rec, graph)){
                return ans;
            }
        }
    }

    vector<bool> vis2(V, false);
    stack<int> s;
    for(int i=0; i<V; i++){
        if(!vis[i]){
            topoSort(i, vis2, s, graph);
        }
    }
    while(s.size() > 0){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

//leetcode: 210 (medium)