#include<bits/stdc++.h>
using namespace std;
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](auto&a, auto&b) {
        return a[1] < b[1];
    });
    
    int count = 0, lastEnd = INT_MIN;
    for(vector<int>& curr : intervals){
        if(curr[0] >= lastEnd){
            count++;
            lastEnd = curr[1];
        }
    }
    return intervals.size() - count;
}
//leetcode : 435