#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    cout<<"Set size: "<<s.size() <<endl;

    //find
    if(s.find(3) != s.end()){
        cout<<"3 exist\n";
    }else{
        cout<<"3 doesn't exist\n";
    }

    s.erase(3);
    cout<<"After erase size: "<<s.size()<<endl;
    for(auto el : s){
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}
