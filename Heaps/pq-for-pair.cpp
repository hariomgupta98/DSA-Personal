#include<bits/stdc++.h>
using namespace std;

struct ComparePair{
    bool operator() (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second > p2.second;
    }
};
int main(){
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq; //default -- maxHeap; "first"
    pq.push(make_pair("Aman", 98));
    pq.push(make_pair("Bhumika", 10));
    pq.push(make_pair("Chetan", 115));

    while(!pq.empty()){
        cout<<"Top = "<<pq.top().first<<", "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}