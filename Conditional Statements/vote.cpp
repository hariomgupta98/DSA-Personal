#include<iostream>
using namespace std;

int main() {
    int age = 21;
    cout<<"Enter your age: ";
    cin>>age;
    if(age >= 18) {
        cout<<"You can vote"<<endl;
    } else {
        cout<<"You can't vote"<<endl;
    }

    int a, b;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    if(a > b) {
        cout<<"A is greater than B"<<endl;
    } else {
        cout<<"B is greater than A"<<endl;
    }
    return 0;
}