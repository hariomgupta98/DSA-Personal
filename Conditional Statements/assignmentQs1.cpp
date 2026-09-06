#include<iostream>
using namespace std;

int main() {
    //write a ac++ program to get aa number from user and print whether it's positive or negative or zero
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num > 0) {
        cout<<"Number is positive"<<endl;
    } else if(num < 0) {
        cout<<"Number is negative"<<endl;
    } else {
        cout<<"Number is zero"<<endl;
    }
    return 0;
}