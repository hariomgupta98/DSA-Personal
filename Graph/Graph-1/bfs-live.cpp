input: adj[][] = [[2,3,1], [0], [0, 4], [0], [2]]

Output: [0, 2, 3, 1, 4]
Explanation: Starting from 0, the BFS traversal will follow these step
Visit 0 -> Output: 0
Visit 2 (first neighbor of 0) -> Output: 0,2
Visit 3 (next neighbor of 0) -> Output: 0, 2, 3
Visit 1 (next neighbor of 0) -> Output: 0, 2, 3, 1
Visit 4 (next neighbor of 0) -> Output: 0, 2, 3, 1, 4


vector<int> bfsOfGraph(int V, vector<int> adj[]){
    vector<int> v;
    queue<int> q;
    vector<int> visited(V, false); //space->V (size)

    q.push(0);
    visited[0] = true;

    while(q.empty() == false){
        int val = q.front();
        q.pop();
        v.push_back(val);

        for(auto x : adj[va]){
            if(visited[x] == false){
                visited[x] = true;
                q.push(x);
            }
        }
    }
    return v;
}