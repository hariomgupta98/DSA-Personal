#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int V;
    //1.store pairs of (neighbor_vertex, edge_weight)
    list<pair<int, int>>* l;
public:
    Graph(int V){
        this->V = V;
        l = new list<pair<int, int>> [V];
    }
    
    //2.add a weight parameter
    void addEdge(int u, int v, int weight){

        //add edge from u to v only(directed graph)
        l[u].push_back(make_pair(v, weight));

        //removed because it is directed, not undirected
        l[v].push_back(make_pair(u, weight));
    }
    void print(){
        for(int u=0; u<V; u++){
            list<pair<int, int>> neighbors = l[u];
            cout<<u<<" : ";
             
            //3.extract and print both vertex and weight
            for(auto edge: neighbors){
                int v = edge.first;
                int weight = edge.second;
                cout<<"("<<v<<" , "<<weight<<")";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph graph(5);
    graph.addEdge(0, 1, 5);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 3);
    graph.addEdge(2, 3, 1);
    graph.addEdge(2, 4, 2);
    graph.print();
    return 0;
}