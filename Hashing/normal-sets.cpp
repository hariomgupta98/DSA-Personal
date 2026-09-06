#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(8);
    s.insert(3);
    s.insert(9);
    s.insert(1);
    cout<<"Before size: "<<s.size()<<endl;

    for(auto el : s){
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;

}