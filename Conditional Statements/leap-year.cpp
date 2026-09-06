#include<iostream>
using namespace std;

int main() {
    //write a c++ program to check whether a year is leap year or not
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if(year %400 == 0) {
        cout<<"Leap year"<<endl;
    } else if(year %100 == 0) {
        cout<<"NOt a leap year"<<endl;
    } else if(year %4 == 0) {
        cout<<"Leap year"<<endl;
    } else {
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}
