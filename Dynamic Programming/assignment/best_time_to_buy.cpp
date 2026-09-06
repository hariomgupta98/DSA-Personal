#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int fee){
    int n = prices.size();
    if(n == 0) return 0;
    int cash = 0;
    int hold = -prices[0];

    for(int i=1; i<n; i++){
        int newCash = max(cash, hold + prices[i] - fee);
        int newHold = max(hold, cash - prices[i]);

        cash = newCash;
        hold = newHold;
    }
    return cash;
}

//-----Memoization------
int helper(int idx, bool canBuy, int fee, vector<vector<int>> &dp, vector<int> &prices){
    if(idx == prices.size()) return 0;
    if(dp[canBuy][idx] != -1) return dp[canBuy][idx];
    int ans = INT_MIN;
    if(canBuy == true){
        ans = max(ans, -1*prices[idx] + helper(idx+1, false, fee, dp, prices));
    }else{
        ans = max(ans, prices[idx] - fee + helper(idx+1, true, fee, dp, prices));
    }
    ans = max(ans, helper(idx+1, canBuy, fee, dp, prices));
    return dp[canBuy][idx] = ans;
}

int maxProfitMemo(vector<int> &prices, int fee){
    int n = prices.size();
    vector<vector<int>> dp(2, vector<int>(n, -1));
    return helper(0, true, fee, dp, prices);
}

int main(){
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    cout<<maxProfit(prices, fee)<<endl;
    return 0;
}

//lc : 714