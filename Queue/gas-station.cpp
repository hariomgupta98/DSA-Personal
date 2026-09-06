#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int>& cost){
    int totCost = 0, totGas = 0;
    // for(int val : gas){
    //     totGas += val;
    // }
    // for(int val : cost){
    //     totCost += val;
    // }
    //if(totGas < totCost) return -1;
    //unique solution always exists
    int start = 0, currGas = 0;
    for(int i=0; i<gas.size(); i++){
        totGas += gas[i];
        totCost += cost[i];
        currGas += (gas[i] - cost[i]);

        if(currGas < 0){
            start = i + 1;
            currGas = 0;
        }
    }
    return totGas<totCost ? -1 : start;
}

int main(){
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    cout<<"Result: "<<canCompleteCircuit(gas, cost)<<endl;
    return 0;
}

//TC: O(n), SC: (1)
//leetcode: 134