#include<bits/stdc++.h>
using namespace std;

int changeCoins(vector<int> coins, int amount){
    int n = coins.size();
    vector<vector<int>> dp(n+1, vector<int>(amount+1, 0));

    for(int i=1; i<n+1; i++){
        dp[i][0] = 1;

    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<amount+1; j++){
            if(coins[i-1] <= j){
                dp[i][j] = 1LL * dp[i][j-coins[i-1]] + dp[i-1][j]; // not overflow
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i=0; i<n+1; i++){
        for(int j=0; j<amount+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][amount];
}

int main(){
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    cout<<changeCoins(coins, amount)<<endl;
    return 0;
}

//tc: O(N*Amount)
//lc: 518