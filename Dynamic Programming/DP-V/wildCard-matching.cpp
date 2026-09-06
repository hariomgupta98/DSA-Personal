#include<bits/stdc++.h>
using namespace std;

bool wildcardMatching(string text, string pattern){ //)(n*m)
    int n = text.size();
    int m = pattern.size();

    vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
    dp[0][0] = true;

    for(int j=1; j<m+1; j++){ //0th row -> text is ""
        if(pattern[j-1] == '*'){
            dp[0][j] = dp[0][j-1];
        }else{ //'?' or eng char
            dp[0][j] = false;
        }
    }

    //bottom up manner fill up
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(text[i-1] == pattern[j-1] || pattern[j-1] == '?'){
                dp[i][j] = dp[i-1][j-1];
            }else if(pattern[j-1] == '*'){
                dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }else{
                dp[i][j] = false;
            }
        }
    }
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][m];
}

int main(){
    string text = "abc";
    string pattern = "abc*";
    cout<<wildcardMatching(text, pattern)<<endl;
    return 0;
}