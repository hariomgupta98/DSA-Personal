#include<iostream>
using namespace std;
int main(){
    //..........................fibonacci number
    int n, first = 0, second = 1, third;
    cout<<"Enter the fibanocci number: ";
    cin>>n;

    for(int i=2; i<=n; i++) {
        third = first+second;
        first = second;
        second = third;
    }
    cout<<"The fibonacci number is: "<<second<<endl;
    return 0;
}
