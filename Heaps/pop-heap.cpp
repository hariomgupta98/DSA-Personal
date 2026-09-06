#include<bits/stdc++.h>
using namespace std;
class Heap{
    vector<int> vec;//CBT
public:
    void push(int val){
        vec.push_back(val);

        int x = vec.size()-1;
        int parentIdx = (x - 1)/2;
        while(parentIdx >= 0 && vec[x] > vec[parentIdx]){
            swap(vec[x], vec[parentIdx]);
            x = parentIdx;
            parentIdx = (x-1) / 2;
        }
    }
    void heapify(int i){ //i = parent
        if(i >= vec.size()){
            return;
        }

        int leftChild = 2*i+1;
        int rightChild = 2*i+2;
        
        int maxIdx = i;
        if(leftChild < vec.size() && vec[leftChild] > vec[maxIdx]){
            maxIdx = leftChild;
        }
        if(rightChild < vec.size() && vec[rightChild] > vec[maxIdx]){
            maxIdx = rightChild;
        }

        swap(vec[i], vec[maxIdx]);
        if(maxIdx != i){ //swaping with child node
            heapify(maxIdx);

        }
    }
    void pop(){
        //step 1
        swap(vec[0], vec[vec.size()-1]);

        //step 2
        vec.pop_back(); //[]

        //step 3
        heapify(0); //O(log n)

    }
    int top(){
        return vec[0];
    }
    bool empty(){
        return vec.size() == 0;
    }
};
int main(){
    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    while(!heap.empty()){
        cout<<"top = "<<heap.top()<<endl;
        heap.pop();
    }
    return 0;
}