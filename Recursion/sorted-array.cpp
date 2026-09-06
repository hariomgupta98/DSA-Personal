#include<iostream>
using namespace std;
bool isSorted(int arr[], int n, int i) {
    if(i==n-1) {
        cout<<"True\n";
        return true;
    }
    if(arr[i] > arr[i+1]) {
        cout<<"False\n";
        return false;
    }
    return isSorted(arr, n, i+1) ;
}
int main() {
    int arr1[5] = {1, 3, 4, 5, 3}; // unsorted 0
    int arr2[5] = {1, 2, 3, 4, 5}; //sorted 1
    cout<<isSorted(arr2, 5, 2)<<endl;
    return 0;
}