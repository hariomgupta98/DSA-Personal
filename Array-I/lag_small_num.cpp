#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 8, 5, 6, 1, 10};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"largest number: "<<max<<endl;
    cout<<"smallest number: "<<min<<endl;
    return 0;
}