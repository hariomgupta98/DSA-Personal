#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

template<class H>
class Stack{
    list<H> ll;
public:
    void push(H val){
        //push_front
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    H top(){
        return ll.front();
    }
    bool isEmpty() {
        return ll.size() == 0;
    }
};

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}