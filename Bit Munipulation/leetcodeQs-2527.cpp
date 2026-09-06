#include<iostream>
using namespace std;

int findEffectiveValue(int arr[], int i, int j,  int k) {
    return (arr[i], arr[j], arr[k]);
}
int findXorBeauty(int arr[], int n) {
    int ans = 0; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                int effectiveVal = findEffectiveValue(arr, i, j, k);
                ans = ans^effectiveVal;

            }
        }
    }
    return ans;
}
