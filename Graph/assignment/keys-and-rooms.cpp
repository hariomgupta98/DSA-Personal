#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
    int count;
    void dfs(int curr, int vis[], vector<vector<int>> &rooms){
        vis[curr] = 1;
        count++;
        for(int connection : rooms[curr]){
            if(vis[connection] == 0){
                dfs(connection, vis, rooms);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>> &rooms){
        int n = rooms.size();
        int vis[n];
        for(int i=0; i<n; i++){
            vis[i] = 0;
        }
        count = 0;
        dfs(0, vis, rooms);
        if(count == n) {
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Graph g;
    vector<vector<int>> rooms = {{1}, {2}, {3}, {}};
    bool ans = g.canVisitAllRooms(rooms);
    cout<<ans;
    return 0;
}

//lc: 841