#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;

    int largest = a > b ? a : b;
    cout<<"Largest number is "<<largest<<endl;
    return 0;
}