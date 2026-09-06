#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int longestIncreasingSubseq(vector<int> arr){ //O(n^2)
    unordered_set<int> s(arr.begin(), arr.end()); //in which store all unique values - O(n)

    vector<int> arr2(s.begin(), s.end());
    sort(arr2.begin(), arr2.end()); //ascending sorted order - O(nlogn)

    // LCS => LIS
    int n = arr.size();
    int m = arr2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=1; i<n+1; i++){ //O(n*n)
        for(int j=1; j<m+1; j++){
            if(arr[i-1] == arr2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][m];
}
int main(){
    vector<int> arr = {50, 3, 10, 7, 40, 80};
    cout<<longestIncreasingSubseq(arr)<<endl;
    return 0;
}