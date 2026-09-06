#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<stack>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>> *l; //int , int : neighbor + wt
    bool isUndir;
public:
    Graph(int V, bool isUndir = true){
        this->V = V;
        l = new list<pair<int, int>> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v, int wt){ //u---v (weight)
        l[u].push_back(make_pair(v, wt));
        if(!isUndir){
            l[v].push_back(make_pair(u, wt));
        }
    }

    void primsAlgo(int src){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        //(wt, u) --> minHeap
        vector<bool> mst(V, false);

        pq.push(make_pair(0, src));
        int ans = 0;

        while(pq.size() > 0){
            int u = pq.top().second; // pick minimum edge. second --> u call it vectix
            int wt = pq.top().first; //first --> because first par hum aapna weight store kara rahe hai
            pq.pop();

            if(!mst[u]){
                mst[u] = true;
                ans += wt;
                list<pair<int, int>> neighbors = l[u];
                for(pair<int, int> n : neighbors){
                    int v = n.first;                 // | Edge information
                    int currWt = n.second;           // |
                    pq.push(make_pair(currWt, v));
                }
            }
        }

        cout<<"final cost of MST = "<<ans<<endl;
    }
};


int main(){
    //Prime's Algorithm Graph
    Graph graph(4);
    graph.addEdge(0, 1, 10); //0 -> u, 1 -> V, 10 -> wt
    graph.addEdge(0, 2, 15);
    graph.addEdge(0, 3, 30);

    graph.addEdge(1, 3, 40);
    
    graph.addEdge(2, 3, 50);
    graph.primsAlgo(0);

    return 0;
}
