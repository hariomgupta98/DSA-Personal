#include<iostream>
using namespace std;
//--------->>>>prime number<<<-----------

bool isPrime(int n) { //n-> true , false
    if(n==1){
        return false;
    }
    for(int i=2; i<=n-i; i++) { //non prime number
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    cout<<isPrime(23)<<endl;
    return 0;
}