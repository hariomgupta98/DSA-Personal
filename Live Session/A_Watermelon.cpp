#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    
    int n;
    cin>>n;
    if(n%2==0 && n!=2) {
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    return 0;
}