#include<bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n) {
  int freq=0, ans=0;
  for(int i=0; i<n; i++){
    if(freq==0){
        ans=nums[i];
    }
    if(ans==nums[i]){
        freq++;
    }else{
        freq--;
    }
}
    int count=0;
    for(int i=0; i<n; i++){
        if(nums[i]==ans){
            count++;
        }
    }
        if(count>n/2){
            return ans;
        }else{
            return -1;
    }
}
int main() {
    int nums[] = {2,2, 1, 1, 1, 2, 2, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<majorityElement(nums, n)<<endl;
    return 0;
}