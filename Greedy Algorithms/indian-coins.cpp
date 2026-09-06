#include<bits/stdc++.h>
using namespace std;

int getMinChange(vector<int> coins, int V){
    int ans = 0; 
    int n = coins.size();
    for(int i=n-1; i>=0 && V>0; i--){
        if(V >= coins[i]){
            int count = V/coins[i];
            ans += count;
            V = V%coins[i];
            cout<<"Use coins/notes "<<coins[i]<<" : "<<count<<" times\n";
        }
    }     
    // cout<<coins[i]<<" : "<<V<<"times\n";
    cout<<"Min coins for change = "<<ans<<endl;
    return ans;
}

int main(){
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000}; //O(n);
    int V = 1099;
    getMinChange(coins, V);
    return 0;

}