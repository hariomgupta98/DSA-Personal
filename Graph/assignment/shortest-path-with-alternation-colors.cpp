#include <bits/stdc++.h>
using namespace std;

vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
    vector<vector<pair<int, int>>> graph(n);
    //0 = red, 1 = blue
    for(auto &e : redEdges){
        graph[e[0]].push_back({e[1], 0});
    }
    for(auto &e : blueEdges){
        graph[e[0]].push_back({e[1], 1});
    }
    vector<int> ans(n, -1);
    vector<vector<int>> vis(n, vector<int>(2, 0));
    queue<pair<int, int>> q;
    q.push({0, 0});
    q.push({0, 1});
    vis[0][0] = vis[0][1] = 1;
    int dist = 0;
    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            auto cur = q.front();
            q.pop();
            int node = cur.first;
            int lastColor = cur.second;
            if(ans[node] == -1){
                ans[node] = dist;
            }
            for(auto &edge : graph[node]){
                int next = edge.first;
                int color = edge.second;

                if(color != lastColor && !vis[next][color]){
                    vis[next][color] = 1;
                    q.push({next, color});
                }
            }
        }
        dist++;
    }
    return ans;
}

int main(){
    int n = 3;
    vector<vector<int>> redEdge = {{0,1}, {1, 2}};
    vector<vector<int>> blueEdge = {};
    vector<int> result = shortestAlternatingPaths(3, redEdge, blueEdge);
    for(int x : result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}