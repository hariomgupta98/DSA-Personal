#include<iostream>
#include<vector>
using namespace std;

int countWaysRec(int n){ //tc: O(2^n)
    if(n==0 || n==1) return 1;
    return countWaysRec(n-1) + countWaysRec(n-2);
}

int countWaysMem(int n, vector<int> &dp){ //tc: O(n)
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = countWaysMem(n-1, dp) + countWaysMem(n-2, dp);
    return dp[n];
}

int main(){
    int n = 5;
    vector<int> dp(n+1, -1);
    cout<<countWaysMem(n, dp)<<endl;
    return 0;
}