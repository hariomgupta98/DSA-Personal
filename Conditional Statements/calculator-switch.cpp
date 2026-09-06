#include<iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    cout<<"Enter the operator like (+,-,*,/): ";
    cin>>op;

    switch(op) {
        case '+': cout<<"A + B: "<<(a+b)<<endl;
        break;
        case '-': cout<<"A - B: "<<(a-b)<<endl;
        break;
        case '*': cout<<"A * B: "<<(a*b)<<endl;
        break;
        case '/': cout<<"A / B: "<<(a/b)<<endl;
        break;
        defult : cout<<"Invalid operator"<<endl;
    }
    return 0;
}