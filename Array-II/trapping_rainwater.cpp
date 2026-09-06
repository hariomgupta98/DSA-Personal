#include <iostream> 
using namespace std;

//........Trapping Rainwater
//-> for leftMax
//  void trap(int *heights, int n) {
//     int leftMax[20000];
//     leftMax[0] = INT_MIN;
//     cout<<leftMax<<",";
//     for(int i=1; i<n; i++) {
//         leftMax[i] = max(leftMax[i-1], heights[i-1]);
//         cout<<leftMax[i]<<",";
//     }
//     cout<<endl;
// }
// int main() {
//     int heights[7] = {4, 2, 0, 6, 3, 2, 5};
//     int n = sizeof(heights) / sizeof(int);
//     trap(heights, n);
//     return 0;
// }

// //-> for rightMax;
// void trap(int *height, int n) {
//     int rightMax[20000];
//     rightMax[n-1] = INT_MIN;
//     cout<<rightMax[n-1]<<",";
//     for(int i=n-2; i>=0; i--) {
//         rightMax[i] = max(rightMax[i+1], height[i+1]);
//         cout<<rightMax[i]<<","; 
//     }
//     cout<<endl;
// }
// int main() {
//     int height[7] = {4, 2, 0, 6, 3, 2, 5};
//     int n = sizeof(height) / sizeof(int);
//     trap(height, n);
//     return 0;
// }

// -> final result
int trap(int *height, int n) {
    int leftMax[20000], rightMax[20000];
    leftMax[0] = rightMax[0];
    rightMax[n-1] = height[n-1];

    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }
    for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }
    int waterTrapped = 0; 
    for(int i=0; i<n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if(currWater > 0) {
            waterTrapped += currWater;
        }
    }
    cout<<"Water trapped = "<<waterTrapped<<endl;
    return waterTrapped;
}
int main() {
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
return 0;
}