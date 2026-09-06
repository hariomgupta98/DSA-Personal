#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    
    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(8);

    while(!pq.empty()){
        cout<<"Top element: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
