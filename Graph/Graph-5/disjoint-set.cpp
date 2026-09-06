#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
public:
    int n;
    vector<int> par;
    vector<int> rank;
    DisjointSet(int n){
        this->n = n;

        for(int i=0; i<n; i++){
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x){ //TC: O(alpha) constant
        if(par[x] == x){
            return x;
        }
        return par[x] = find(par[x]); //path compression
    }

    void unionByRank(int a, int b){ //O(alpha) constant
        int parA= find(a);
        int parB = find(b);

        if(rank[parA] == rank[parB]){
            par[parB] = parA;
            rank[parA]++;

        }else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        }else{
            par[parA] = parB;
        }
    }

    void getInfo(){ //addition only print in disjoint set it is not a part of disjointSet
        cout<<"e---p---r"<<endl;
        for(int i=0; i<n; i++){
            cout<<i<<" : "<<par[i]<<" , "<<rank[i]<<endl;
        }
    }
};


int main(){
    DisjointSet dj(6);
    dj.unionByRank(0, 2);
    cout<<"find par's 2: "<<dj.find(2)<<endl;
    dj.unionByRank(1, 3);
    dj.unionByRank(2, 5);
    dj.unionByRank(0, 3);
    cout<<"find par's 2: "<<dj.find(2)<<endl;
    dj.unionByRank(0, 4);
    dj.getInfo();
    return 0;
}