#include<bits/stdc++.h>
using namespace std;

//tc: O(n^2), sc: O(n)
int catlanTab(int n){
    vector<int> dp(n+1, 0);
    dp[0] = dp[1] = 1;

    for(int i=2; i<=n; i++){ //ith catlan
        for(int j=0; j<i; j++){ //0 to i-1
            dp[i] += dp[j] * dp[i-j-1];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
    return dp[n];
}


//---tc: O(N), sc: O(1)
int catlan(int n){
    int m = 1;
    for(int i=2; i<=n; i++){
        m = (m * (4*i-2)/(i+1));
    }
    
    return m;
}

int main(){
    int n = 6;
    cout<<catlanTab(n)<<endl;
    return 0;
}