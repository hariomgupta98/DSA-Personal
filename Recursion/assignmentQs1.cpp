#include<bits/stdc++.h>
using namespace std;

int binarySear(int arr[], int str, int end, int key) {
    if(str > end)  return -1;

    int mid = (str + end)/2;
    if(arr[mid] == key) return mid;

    if(arr[mid] > key) 
        return binarySear(arr, str, mid-1, key) ;
    else
        return binarySear(arr, mid+1, end, key);
    
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7; 
    int key = 5; 
    cout<<binarySear(arr, 0, n-1, key)<<endl;
    // if(index != -1) 
    //     cout<<"Element found at this index: "<<index<<endl;
    // else
    //     cout<<"Element not found.";
    return 0;
}