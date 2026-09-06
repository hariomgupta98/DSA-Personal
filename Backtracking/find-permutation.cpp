#include<bits/stdc++.h>
using namespace std;

void permutation(string str, string ans) {
    int n = str.size();
    if(n == 0){
        cout<<ans<<"\n";
        return;
    }
    for(int i=0; i<n; i++) {
        char ch = str[i];
        //"abcdefgh" , i = 2 => "ab" + "defgh" => 
         string nexStr = str.substr(0, i) + str.substr(i+1, n-i-1);
         permutation(nexStr, ans + ch); //ith char choice to add in permutation
    }
}

int main() {
    string str = "abc";
    string ans = "";
    permutation(str, ans);
    return 0;
}