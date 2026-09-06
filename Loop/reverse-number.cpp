#include<iostream>
using namespace std;
int main(){
    //.............................reverse a given number & print the result 
    int n;
    cout<<"Please enter the number for reversing order: ";
    cin>>n;
    int result = 0;
    while(n>0) {
        int lastDigit = n%10;
        result = result*10 + lastDigit;
        n /= 10;
    }
    cout<<"The reverse number is: "<<result<<endl;
    return 0;
}