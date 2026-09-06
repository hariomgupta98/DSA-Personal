#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n==0 || n==1) {
        return n; //1, 0
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The fibonacci number is: "<<fibonacci(num)<<endl;
    return 0;
}