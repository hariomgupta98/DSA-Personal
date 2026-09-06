#include<iostream>
using namespace std;
int main(){
    //..........................reverse a number
    int n = 12345; //54321
    while(n>0) {
        int lastDigit = n%10;
        cout<<lastDigit;
        n /=10;
    }
    return 0;
}