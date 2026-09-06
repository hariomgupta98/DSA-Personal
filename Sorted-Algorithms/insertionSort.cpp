#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

}
void insertionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int curr = arr[i];
        int previous = i-1; 
        while(previous >= 0 && arr[previous] > curr){
            swap(arr[previous], arr[previous+1]);
            previous--;
        }
        arr[previous+1] = curr;
    }

    print(arr, n);
}
 int main() {
    int arr[5] = {4, 5, 2, 1, 3};
    insertionSort(arr, 5);
    return 0;
}