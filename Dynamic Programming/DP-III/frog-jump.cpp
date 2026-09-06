#include<iostream>
#include<vector>
using namespace std;

//tc: O(n), sc: O(n)
int minCost(vector<int> &height){
    int n = height.size();
    if(n==1) return 0;
    vector<int> dp(n); //dp[i] => min cost to reach last stair i

    dp[0] = 0;
    dp[1] = abs(height[1] - height[0]);

    for(int i=2; i<n; i++){
        int jump1 = dp[i-1] + abs(height[i] - height[i-1]);        
        int jump2 = dp[i-2] + abs(height[i] - height[i-2]);        
        
        dp[i] = min(jump1, jump2);
    }
    return dp[n-1];
}



//tc: O(N), sc: (1)
int minCost(vector<int> &height){
    int n = height.size();
    if(n==1) return 0;

    int prev1 = 0;
    int prev2 = abs(height[1]-height[0]);
    int result = prev2;

    for(int i=2; i<n; i++){
        int jump1 = prev2 + abs(height[i] - height[i-1]);        
        int jump2 = prev1 + abs(height[i] - height[i-2]);        
        
        result = min(jump1, jump2);
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}

int main(){
    vector<int> height = {30, 20, 50, 10, 40};
    cout<<minCost(height)<<endl;
    return 0;
}