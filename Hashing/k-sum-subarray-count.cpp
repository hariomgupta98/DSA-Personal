#include<bits/stdc++.h>
using namespace std;

int subArrayCountWithK(vector<int> arr, int K){ //sum[i, j] = sum[j] - sum[i]
    unordered_map<int, int> m; //sum, count;
    m[0] = 1; 
    int sum = 0;
    int ans = 0; 
    for(int i=0; i<arr.size(); i++){
        sum += arr[i]; 
        if(m.count(sum-K)){
            ans += m[sum-K];
        }

        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum] = 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {10, 2, -2, -20, 10};
    int K = -10;
    cout<<"subarray count: "<<subArrayCountWithK(arr, K)<<endl;
    return 0;
}

//time complexity: O(n)