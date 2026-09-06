#include<iostream>
using namespace std;
    //.......input
int main(){
    int arr[5];
    int n = sizeof(arr) / sizeof(int);

    cout<<"Enter the number: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"You are enter the number: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}