#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        int comp = target - nums[i];
        if(m.find(comp) != m.end()){
            return {m[comp], i};
        }
        m[nums[i]] = i;
    }
    return {};
}
int main(){
    vector<int> nums = {1, 5, 7, 11, 15, 2};
    int tar = 9;
    vector<int> ans = twoSum(nums, tar);
    cout<<"ans : "<<ans[0]<<" , "<<ans[1]<<" "<<endl;
    return 0;
}

