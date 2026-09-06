#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void heapify(int i, vector<int> &arr, int n){
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
    int maxIdx = i; //i = parent
    if(left < n && arr[left] > arr[maxIdx]){
        maxIdx = left;
    }
    if(right < n && arr[right] > arr[maxIdx]){
        maxIdx = right;
    }

    if(maxIdx != i){
        swap(arr[i], arr[maxIdx]);
        heapify(maxIdx, arr, n);
    }
}

//step1
void heapSort(vector<int> &arr){
    int n = arr.size();
    //step1 : build maxHeap
    for(int i=n/2-1; i>=0; i--){ //O(n*log n)
        heapify(i, arr, n);
    }

    //step 2 : taking element to correct position
    for(int i=n-1; i>=0; i--){ //O(n*log n)
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}
int main(){
    vector<int> arr = {1, 4 ,2 ,5 ,3};
    heapSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


