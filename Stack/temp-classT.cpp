#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    vector<T> vec;
public: 
    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        vec.pop_back();
    }

    T top(){ 
        int lastIdx = vec.size()-1; // not changing because index always be interger type
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main(){
    Stack <string> s;
    s.push("DSA\n");
    s.push("with");
    s.push("Gupta's");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";  
        s.pop();
    }
    cout<<endl;
    return 0;
}