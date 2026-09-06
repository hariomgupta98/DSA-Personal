#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, -1);
    return helper(0, n, dp, nums);
}
int helper(int curr, int n, vector<int> &dp, vector<int> &nums){
    if(curr >= n){
        return 0;
    }

    if(dp[curr] != -1) return dp[curr];
    int rob_house = nums[curr]+ helper(curr+2, n, dp, nums);
    int not_rob_house = helper(curr+1, n, dp, nums);
    dp[curr] = max(rob_house, not_rob_house);
    return dp[curr];
}