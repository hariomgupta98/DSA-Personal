#include<iostream>
#include<deque>
using namespace std;


class Stack {
    deque<int> deq;
public:
    void push(int data){ //O(1)
        deq.push_front(data);
    }

    void pop(){ //O(1)
        deq.pop_front();  //back try
    }

    int top(){ //O(1)
        return deq.front(); //put back try implement
    }
};
int main(){
    Stack s;
    for(int i=1; i<=5; i++){
        s.push(i);
    }

    for(int i=1; i<=5; i++){
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    return 0;
}