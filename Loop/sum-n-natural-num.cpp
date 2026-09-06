#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // Sum of first n natural numbers
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int sum = 0;
    for(int i=1; i<n; i++) {
        sum += i;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}