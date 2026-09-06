#include<bits/stdc++.h>
using namespace std;

//--Memoization
bool helper(int idx, int weight, vector<int> &nums, vector<vector<int>>&dp){
    if(weight == 0) return true;
    if(idx == nums.size() || weight < 0){
        return false;
    }

    if(dp[idx][weight] != -1){
        return dp[idx][weight];
    }
    dp[idx][weight] = helper(idx+1, weight - nums[idx], nums, dp)|| helper(idx+1, weight, nums, dp);
    return dp[idx][weight];
}

bool canPartition(vector<int> &nums){
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
    }

    if(sum %2 != 0) return false;
    vector<vector<int>> dp(nums.size(), vector<int>((sum/2)+1, -1));
    return helper(0, sum/2, nums, dp);
}

//Tabulation
bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int totalSum = 0;
    for(int num : nums){
        totalSum += num;
    }
    if(totalSum % 2 != 0) return false;
    int target = totalSum / 2;
    vector<bool> dp(target+1, false);
    dp[0] = true;
    for(int num : nums){
        for(int i=target; i>=num; i--){
            dp[i] = dp[i] || dp[i-num];
            if(dp[target]) return true;
        }
    }
    return dp[target];
}

int main(){
    vector<int> nums = {1, 5, 11, 5};
    cout<<canPartition(nums)<<endl;
    return 0;
}