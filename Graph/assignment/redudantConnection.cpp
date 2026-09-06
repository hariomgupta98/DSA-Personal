#include<bits/stdc++.h>
using namespace std;

int find(int x, vector<int> &parent){
    if(parent[x] == -1){
        return false;
    }
    int res = find(parent[x], parent);
    parent[x] = res;
    return res;
}
bool Union(int a, int b, vector<int> &parent, vector<int> &rank){
    a = find(a, parent);
    b = find(b, parent);
    if(a == b){
        return false;
    }else if(rank[a] > rank[b]){
        parent[a] = b;
    }else{
        parent[b] = a;
        rank[a]++;
    }
    return true;
}
vector<int> findRedundantConnection(vector<vector<int>> &edges){
    int n = edges.size();
    vector<int> parent(n+1, -1);
    vector<int> rank(n+1, 1);
    
    vector<int> ans;
    for(int i=0; i<n; i++){
        int a = edges[i][0];
        int b = edges[i][1];

        if(Union(a, b, parent, rank) == false){
            return {a, b};
        }
    }
    return {};
}