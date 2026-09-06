#include<bits/stdc++.h>
using namespace std;

int countWaysTab(int n){
    vector<int> dp(n+1, 0); //first way of the tabualtion 
    dp[0] = 1;  //second way of the tabulation
    dp[1] = 1;

    for(int i=2; i<=n; i++) {  //third way of the tabulation
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


//tc: O(N), sc: (1)
int climbStairs(int n) {
    if(n==1 || n == 2) return n; 
    int prev1 = 1;
    int prev2 = 2;
    int result = prev1;
    for(int i=3; i<n; i++){
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}

int main() {
    int n = 5;
    cout<<countWaysTab(n);
    return 0;
}