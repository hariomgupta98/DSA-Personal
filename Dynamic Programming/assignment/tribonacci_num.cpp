#include<bits/stdc++.h>
using namespace std;

int tribonacci(int n){
    vector<int> dp(n+1, 0);
    dp[1] = dp[2] = 1;
    for(int i=3; i<n+1; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[n];
}
int main(){
    int n = 25;
    cout<<tribonacci(n)<<endl;
    return 0;
}