#include<iostream>
using namespace std;
void printArr(int nums[], int n) {
    for(int i=0; i<n; i++) {
        cout<<nums[i]<<"  ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1, 3, 4, 5, 6, 9};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Array size = "<<sizeof(arr)<<endl; //24
    printArr(arr, n);
    return 0;
}