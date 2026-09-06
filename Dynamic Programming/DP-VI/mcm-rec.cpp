#include<iostream>
#include<vector>
#include<string>
using namespace std;

int mcmRec(vector<int> arr, int i, int j){ //i => start, j = end
    if(i == j) { //not any ops
        return 0;
    }

    int ans = INT_MAX;
    for(int k=i; k<j; k++){
        int cost1 = mcmRec(arr, i, k); //set1 = (i, k)
        int cost2 = mcmRec(arr, k+1, j); //set2 = (k+1, j)

         //current partition cost
        int currCost = cost1 + cost2 + (arr[i-1] * arr[k] * arr[j]);
        ans = min(ans, currCost);
    }
    for(int k=i; k<j; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return ans;
}

int main(){
    vector<int> arr = {7, 8, 9, 5, 3};
    int n = arr.size();
    cout<<mcmRec(arr, 1, n-1)<<endl;
    return 0;
}