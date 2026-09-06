#include<iostream>
#include<vector>
#include<string>
using namespace std;

//create Stack using linked list
template<class T>
class Node{
public:
     T data;
     Node* next;

    Node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack{
public:
    Node<T>* head;
    Stack(){
        head = NULL;
    }
    
    void push(T val){
        //push_front
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void pop(){
        //pop_front
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool isEmpty(){
        return head == NULL;
    }
};

int main(){
    Stack<string> s;
    s.push("C++");
    s.push("with");
    s.push("DSA");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}