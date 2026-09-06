#include<bits/stdc++.h>
using namespace std;

void evenOddTransformation(int N, vector<int> &arr, int X){
    int n = arr.size();
    while(X--){
        for(int i=0; i<N; i++){
            if(arr[i] % 2 == 0){
                arr[i] -= 2;
            }else{
                arr[i] += 2;
            }
        }
    }
    for(int i=0; i<N; i++){
        cout<<arr[i];
        if(i != N-1){
            cout<<" ";
        }
    }
}                                                                                             
int main(){
    cout<<"enter n: ";
    int N; 
    cin>>N;
    
    vector<int> arr(N);
    cout<<"enter arr: ";
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    cout<<"enter x : ";
    int X;
    cin>>X;           
    evenOddTransformation(N, arr, X);
}