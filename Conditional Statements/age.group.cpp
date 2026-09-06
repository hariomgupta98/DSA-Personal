#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age: ";
    cin>>age;

     bool vote = age >= 18 ? true : false;
     cout<<(vote ? "You can vote" : "You can't vote")<<endl;
     return 0;
}