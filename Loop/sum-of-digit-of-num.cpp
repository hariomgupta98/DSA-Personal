#include<iostream>
using namespace std;
int main(){
    //sum of digit of a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastDigit;
    int sum = 0;
    while(n>0) {
        lastDigit = n%10;
        sum += lastDigit;
        n = n/10;
    }
    cout<<"The sum of digit is: "<<sum<<endl;
    return 0;
}