#include<bits/stdc++.h>
using namespace std;

void printArr(int nums[], int n) {
    for(int i=0; i<n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {3, 4, 5, 2, 8, 54};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n-1;
    while(start<end){
        //swap
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        //in C++ inbuild function for swap
        swap(arr[start], arr[end]);
           start++;
            end--;
        }
    printArr(arr, n);
    return 0;
}
