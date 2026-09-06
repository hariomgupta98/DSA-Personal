#include<bits/stdc++.h>
using namespace std;

void dfs(int current, vector<vector<int>> &adj, vector<bool>& vis){
    vis[current] = true;

    for(int j=0; j<adj[current].size(); j++){
        if(adj[current][j] == 1 && !vis[j]){
            dfs(j, adj, vis);
        }
    }
}


int findCircleNum(vector<vector<int>> &isConnected){
    int numOfProvinces = 0;
    int n = isConnected.size(); //nxn

    vector<bool> vis(n, false);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i, isConnected, vis);
            numOfProvinces++;
        }
    }
    return numOfProvinces;
}
int main(){
    vector<vector<int>> isConnected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int ans = findCircleNum(isConnected);
    cout<<"num of previonces: "<<ans<<endl;
    return 0;
}
//lc: 547