#include<bits/stdc++.h>
using namespace std;

int lastOccur(vector<int> arr, int i, int target){
    if(i==arr.size()){
        return -1;
    }
    int idxFound = lastOccur(arr, target, i+1);
    if(idxFound == -1 && arr[i] == target) {
        return i;
    }
    return idxFound;
}
int main() {
    vector<int> arr = {1, 4, 3, 3, 3, 5};
    cout<<lastOccur(arr, 4, 3)<<endl;
    return 0;
}