#include<bits/stdc++.h>
using namespace std;

int minSwapsCouples(vector<int> &row){
    int n = row.size();
    vector<int> pos(n);
    for(int i=0; i<n; i++){
        pos[row[i]] = i;
    }
    int swap = 0;
    for(int i=0; i<n; i+=2){
        int first = row[i];
        int partner = 0;
        if(first%2 == 0){
            partner = first + 1;
        }else{
            partner = first - 1;
        }
        //int partner = first^1; //partner trick
        if(row[i+1] != partner) {
            int partnerIndex = pos[partner];
            int secondPerson = row[i+1];

            row[i+1] = partner;
            row[partnerIndex] = secondPerson;
            pos[partner] = i+1;
            pos[secondPerson] = partnerIndex;
            swap++;
        }
    }
    return swap;
}
int main(){
    vector<int> row = {0, 4, 1, 3, 5, 2};
    cout<<minSwapsCouples(row);
    return 0;
}

/*
TC: O(N)
SC: O(N)
L: 765
*/