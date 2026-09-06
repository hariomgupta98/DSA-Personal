#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid){
    int m = grid.size(), n = grid[0].size();
    if(i<0 || i>=m || j<0 || j>=n || grid[i][j] != 0){
        return;
    }
    grid[i][j] = 1;
    dfs(i+1, j, grid);              //----------|
    dfs(i-1, j, grid);              //          |=> not a better
    dfs(i, j+1, grid);              //          |   approach
    dfs(i, j-1, grid);              //----------|
}
int closedIsland(vector<vector<int>> &grid){
    int m = grid.size(), n = grid[0].size();
    for(int i=0; i<m; i++){
        dfs(i, 0, grid); //l
        dfs(i, n-1, grid); //r
    }
    for(int j=0; j<n; j++){
        dfs(0, j, grid); //t
        dfs(n-1, j, grid); //b
    }
    int count = 0;
    for(int i=1; i<m-1; i++){
        for(int j=1; j<n-1; j++){
            if(grid[i][j] == 0){
                dfs(i, j, grid);
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>> grid = {
        {1,1,1,1,1,1,1,0},
        {1,0,0,0,0,1,1,0},
        {1,0,1,0,1,1,1,0},
        {1,0,0,0,0,1,0,1},
        {1,1,1,1,1,1,1,0}};
    cout<<closedIsland(grid);  //output: 2
    return 0;  
}



/*
        (i-1,j)
            ↑
(i,j-1) ← (i,j) → (i,j+1)
            ↓
        (i+1,j)

*/