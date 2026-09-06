#include<bits/stdc++.h>
using namespace std;

int sum = 0;
void towerOfHanoi(int n, string source, string dest, string helper){
    if(n==0) return ;
    towerOfHanoi(n-1, source, helper, dest);
    cout<<"Move "<<n<<"th disc from "<<source<<" to "<<dest<<endl;
    sum++;
    towerOfHanoi(n-1, helper, dest, source);
}
int main() {
    int n=3;
    sum = 0;
    towerOfHanoi(n, "A", "C", "B");
    cout<<sum;
}