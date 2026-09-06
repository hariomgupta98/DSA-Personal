#include<iostream>
#include<vector>
using namespace std;

//tc: O(n), sc: (1)
int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int prev1 = 0;
    int prev2 = 0;
    int result = prev2;
    for(int i=2; i<=n; i++){
        result = min(prev2+cost[i-1], prev1+cost[i-2]);
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}

//tc:(n), sc:(n)
int minCostClimbing(vector<int>& cost) {
    int n = cost.size();
    int prev1 = 0;
    int prev2 = 0;
    int result = prev2;
    for(int i=2; i<=n; i++){
        result = min(prev2+cost[i-1], prev1+cost[i-2]);
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}
int main(){
    vector<int> cost = {10, 15, 20};
    cout<<minCostClimbingStairs(cost)<<endl;
    return 0;
}