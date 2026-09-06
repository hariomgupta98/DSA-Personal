#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 8, 9, 5};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        cout<<"Array of index: "<<i<<" "<<", and Array of number is: "<<arr[i]<<endl;
    }
    return 0;
}