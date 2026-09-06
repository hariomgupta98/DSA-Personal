#include<iostream>
#include<stack>
using namespace std;

template<class T>
void pushAtBottom(stack<T> &s, T val){
    if(s.empty()){
        s.push(val); // push at top = push at bottom
        return;
    }

    T temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s, 4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}