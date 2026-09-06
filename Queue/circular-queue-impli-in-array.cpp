#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int capacity;
    int currSize;
    int frnt, rear;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        frnt = 0;
        rear = -1;
    }
    void push(int data){ //O(1)
        if(currSize == capacity){
            cout<<"Queue is Full\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
        currSize++;
    }

    void pop(){ //O(1)
        if(empty()){
            cout<<"Queue is Empty\n";
            return;
        }
        frnt = (frnt + 1) % capacity;
        currSize--;

    }

    int front(){ //O(1)
        if(empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        return arr[frnt];
    }

    bool empty(){
        return currSize == 0;
    }

    void printRear(){
        cout<<arr[rear]<<endl;
    }
};
int main(){
    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;

    q.printRear(); 
    return 0;
}