#include<iostream>
using namespace std;
int main(){
    //.....................armstrong number 153, 370, 371, 407, 1634, 8208, 9474
    //in which equal the power number of digits num.

    int n, lastDigit, cubesum = 0;
    cout<<"Enter the number: ";
    cin>>n;
    int original = n; // save original number

    while(n>0) {
        lastDigit = n % 10;
        cubesum += lastDigit*lastDigit*lastDigit; // only power 3
        n /= 10;
    }
    if(cubesum == original) {
        cout<<"This is an Armstrong number"<<endl;
    } else {
        cout<<"This is not an Armstrong number"<<endl;
    }
    return 0;
}