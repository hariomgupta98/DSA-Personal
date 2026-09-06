#include<bits/stdc++.h>
using namespace std;

void merge(string arr[], int lower, int mid, int heigher){
    vector<string> temp;
    int m = mid;
    int n = heigher;
    int i = lower;
    int j = mid+1;
    while(i<=m && j<=n) {
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=m) {
        temp.push_back(arr[i++]);
    }
    while(j<=n){
        temp.push_back(arr[j++]);
    }
    for(int idx=0, x = lower; x<=heigher; x++) {
        arr[x] = temp[idx++];
    }
}

void mergeSort(string arr[], int lower, int heigher) {
    if(lower>=heigher) {
        return;
    }
    int mid = (lower+heigher)/2;
    mergeSort(arr, lower, mid);
    mergeSort(arr, mid+1, heigher);
    merge(arr, lower, mid, heigher);
}

int main() {
    string arr[4] = {"sun", "earth", "mars", "mercury"};
    mergeSort(arr, 0, 3);
    for(int i=0; i<4; i++){
        cout<<arr[i] <<endl;
    }
    return 0;
}