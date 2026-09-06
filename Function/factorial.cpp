#include<iostream>
using namespace std;
//.............factorial
int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    cout<<"Factorial(" << n << ") = "<<fact<<endl;
    return fact;
}
int main() {
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    return 0;
}