#include<bits/stdc++.h>
using namespace std;

int countWaysVari(int n){  //1, 2, & 3 allowed jumped
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}
int main() {
    int n = 4;
    cout<<countWaysVari(n)<<endl; //7
    return 0;
}