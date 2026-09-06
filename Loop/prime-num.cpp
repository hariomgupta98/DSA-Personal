#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //..................print prime number
    int n;
     bool isPrime = true;
    cout<<"enter the value of n: ";
    cin>>n;
    //for(int i = 2; i<=n-1; i++) { // i completeltly divides n; n is non - prime
        for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0) {
        isPrime = false;
        break;
    }
}
    if(isPrime) {
        cout<<"The number is prime"<<endl;
    } else {
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}