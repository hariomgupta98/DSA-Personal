#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
    priority_queue<string> hs; //any data type
    hs.push("Hello world");
    hs.push("DSA");
    hs.push("in");
    hs.push("C++");

    while(!hs.empty()){
        cout<<"Top element: "<<hs.top()<<endl;
        hs.pop();
    }
    return 0;
}