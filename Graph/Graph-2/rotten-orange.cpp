#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<pair<int, int>, int>> q; //((i, j), time)

    //pushing all source in queue
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 2){
                q.push({{i, j}, 0}); //first pair, and 0 will be starting time
                vis[i][j] = true;
            }
        }
    }

    //bfs
    while(q.size() > 0){
        int i = q.front().first.first; //first pair ki first value
        int j = q.front().first.second; //first pair me second value
        int time = q.front().second;
        q.pop();

        ans = max(ans, time);

        if(i-1 >= 0 && !vis[i-1][j] && grid[i-1][j] == 1){ //top
            q.push({{i-1, j}, time+1});
            vis[i-1][j] = true;
        }

        if(j+1 < m && !vis[i][j+1] && grid[i][j+1] == 1){ //right
            q.push({{i, j+1}, time+1});
            vis[i][j+1] = true;
        }

        if(i+1 < n && !vis[i+1][j] && grid[i+1][j] == 1){ //bottom
            q.push({{i+1, j}, time+1});
            vis[i+1][j] = true;
        } 

        if(j-1 >= 0 && !vis[i][j-1] && grid[i][j-1] == 1){ //left
            q.push({{i, j-1}, time+1});
            vis[i][j-1] = true;
        }
    }

    //check for fresh orange
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 1 && !vis[i][j]){
                return -1;
            }
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {2, 1, 1}};
    int ans = orangesRotting(grid);
    cout<<"time: "<<ans<<endl;
    return 0;
}