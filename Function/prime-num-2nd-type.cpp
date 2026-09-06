#include<iostream>
using namespace std;
//------>>2nd type of prime number<<-----------

bool isPrime2(int n) {
    if(n==1) {
        return false;
    }
    for(int i=2; i*i<=n-1; i++){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    cout<<isPrime2(3)<<endl;
    return 0;
}