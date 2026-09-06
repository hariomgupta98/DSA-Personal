#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Heap{
    vector<int> vec; //CBT
public:
    void push(int val) {
        //step1
        vec.push_back(val);

        //fix heap
        int x = vec.size()-1; //childIdx
        int parI = (x-1)/2;

        while(parI >= 0 && vec[x] < vec[parI]){ //O(log n) :-: For max => vec[x] > vec[parI]
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }

    }

    void pop(){

    }

    int top(){ //O(1)
        return vec[0]; //heighes priority element
    }

    bool empty(){
        return vec.size() == 0;
    }
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);
    cout<<"Top = "<<heap.top()<<endl;
    return 0;
}