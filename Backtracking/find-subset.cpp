#include<bits/stdc++.h>
using namespace std;

void printSubset(string str, string subset) {
    int n = str.size()-1;
    if(str.size() == 0){
        cout<<subset<<"\n";
        return;
    }
    char ch = str[0];

    //yes choice
    printSubset(str.substr(1, n), subset+ch);
    //no choice
    printSubset(str.substr(1, n), subset);
}

int main() {
    string str = "abc";
    string subset = "";
    printSubset(str, subset); //call function
    return 0;
}