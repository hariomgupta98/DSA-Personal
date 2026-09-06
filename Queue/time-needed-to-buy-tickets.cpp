#include<bits/stdc++.h>
using namespace std;

int ticketsRequireToBuy(vector<int> &tickets, int k){
    int n = tickets.size();
    int timeNeed = 0; 
    for(int i=0; i<n; i++){
        if(i<=k) timeNeed += min(tickets[k], tickets[i]);
        else timeNeed += min(tickets[k]-1, tickets[i]);
    }
    return timeNeed;
}
int main(){
    vector<int> num = {2, 3, 2};
    int k = 2; 
    cout<<"Time: "<<ticketsRequireToBuy(num, k);
    return 0;
}

//leetcode: 2073