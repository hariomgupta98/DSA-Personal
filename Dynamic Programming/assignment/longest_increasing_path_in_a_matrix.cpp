#include<bits/stdc++.h>
using namespace std;

int helper(int i, int j, int m, int n, vector<vector<int>> &dp, vector<vector<int>> &matrix){
    if(i<0 || j<0 || i>=m || j>=n) {
        return 0;
    }
    if(dp[i][j] != -1) {
        return dp[i][j];
    }

    int ans = 1;
    if(i+1 < n && matrix[i+1][j] > matrix[i][j]){
        ans = max(ans, 1+helper(i+1, j, m, n, dp, matrix));
    }
    if(j+1 < m && matrix[i][j+1] > matrix[i][j]){
        ans = max(ans, 1+helper(i, j+1, m, n, dp, matrix));
    }
    if(i-1 >= 0 && matrix[i-1][j] > matrix[i][j]){
        ans = max(ans, 1+helper(i-1, j, m, n, dp, matrix));
    }
    if(j-1 >=0 && matrix[i][j-1] > matrix[i][j]){
        ans = max(ans, 1+helper(i, j-1, m, n, dp, matrix));
    }
    return dp[i][j] = ans;
}

int longestIncreasingPath(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans = max(ans, helper(i, j, m, n, dp, matrix));
        }
    }
    return ans;
}

int main(){ 
    vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    cout<<longestIncreasingPath(matrix)<<endl;
    return 0;
}