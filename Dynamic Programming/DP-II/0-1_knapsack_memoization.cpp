#include<iostream>
#include<vector>
using namespace std;

int knapsackMemo(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){ //tc: O(n*W)
    if(dp[n][W] != -1){
        return dp[n][W];
    }
    if(n == 0 || W == 0) return 0;

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= W){
        int ans1 = knapsackMemo(val, wt, W-itemWt, n-1, dp) + itemVal; //include

        int ans2 = knapsackMemo(val, wt, W, n-1, dp); //exclude
        dp[n][W] = max(ans1, ans2);
    }else{
        dp[n][W] =  knapsackMemo(val, wt, W, n-1, dp); //exclude
    }
    return dp[n][W];
}

int main(){
    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};
    int W = 7; 
    int n = 5;
    vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
    cout<<knapsackMemo(val, wt, W, n, dp)<<endl;

    cout<<"memoization matrix\n";
    for(int i=0; i<n+1; i++){
        for(int j=0; j<W+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}