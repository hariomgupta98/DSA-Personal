#include<bits/stdc++.h>
using namespace std;

int validSubstring(string s) {
    int n = s.size();
    if(n<=1) return n;

    int count = 0;
    if(s[0] == s[n-1]){
        count++;
    }
    //Remove letter from end
    //s.substr(start_idx, len)
    count += validSubstring(s.substr(0, n-1));

    //Remove letter from start
    //s.substr(start_idx)
    count += validSubstring(s.substr(1));
    count -= validSubstring(s.substr(1, n-2));
    return count;
}
int main() {
    string s = "abcab";
    cout<<validSubstring(s)<<endl;
    return 0;
}