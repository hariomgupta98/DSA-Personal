#include<iostream>
#include<vector>
using namespace std;

//......max subarray sum  [O(n^3)] -> Burte force <-
void maxSubarraySum1(int *arr, int n) {
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currSum = 0;
            for(int i=start; i<=end; i++) {
                currSum += arr[i];
            }
            cout<<currSum<<", ";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum subarray sum = " <<maxSum<<endl;
}
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum1(arr, n);
    return 0;
}

//......max subarray sum [O(n^2)]
// -> Slightly optimize <-
void maxSubarray3(int *arr, int n) {
    int maxSum = INT_MIN; 
    for(int start=0; start<n; start++) { // start = 2
        int currSum = 0;
        for(int end=start; end<n; end++) { // end = 2, 3, 4
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}
int main() {
    int arr[] = {2, 3, -4, -5, -6};
    int n = sizeof(arr) / sizeof(int);
    maxSubarray3(arr, n);
    return 0;
}


//.....2nd methods
int maxProduct(vector<int>& nums) {
    int n=nums.size();

    int ans=nums[0];
    int mini=nums[0];
    int maxi=nums[0];

    for(int i=1; i<n; i++) {
        if(nums[i]<0){
            swap(mini, maxi);
        }
        maxi=max(nums[i], maxi*nums[i]);
        mini=min(nums[i], mini*nums[i]);
        ans=max(ans, maxi);
    }
    return ans;
}
int main() {
    int arr[] = {2, 3, -4, -5, -6};
    //int n = sizeof(arr) / sizeof(int);
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout<<"Maximum product: "<<maxProduct(nums)<<endl;
    return 0;
}



