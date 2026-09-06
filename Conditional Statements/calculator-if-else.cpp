#include<iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    cout<<"Enter the operator (+, -, *, /): ";
    cin>>op;

    if(op == '+') {
        cout<<"a + b: "<<(a+b)<<endl;
    } else if(op == '-') {
        cout<<"a - b: "<<(a-b)<<endl;
    } else if(op == '*') {
        cout<<"a * b: "<<(a*b)<<endl;
    } else if(op == '/') {
        cout<<"a / b: "<<(a/b)<<endl;
    } else {
        cout<<"Invalid operator"<<endl;
    }
    return 0;
}
