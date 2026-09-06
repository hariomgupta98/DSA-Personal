#include<bits/stdc++.h>
using namespace std;

vector<string> generateParantheses(int n){
    vector<vector<string>> dp(n+1);
    dp[0] = {""};
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            for(string left : dp[j]){
                for(string right : dp[i-j-1]){
                    dp[i].push_back("(" + left + ")" + right);
                }
            }
        }
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n];
}
int main(){ 
    int n = 3;
    vector<string> ans = generateParantheses(n);
    for(string s : ans){
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}

//lc: 22