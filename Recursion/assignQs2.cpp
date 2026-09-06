#include<bits/stdc++.h>
using namespace std;

void allOcc(vector<int> arr, int i, int n, int key) {
    if(i == n){
        return;
    }
    if(arr[i] == key) {
        cout<<i<<endl;
    }
     allOcc(arr, i+1, n, key);
}
int main() {
    vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    allOcc(arr, 0, arr.size(), 2);
    return 0;
}