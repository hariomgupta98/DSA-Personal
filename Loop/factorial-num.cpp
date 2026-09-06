#include<iostream>
using namespace std;
int main(){
    //.........................factorial number
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    long long fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    cout<<"The factorial number is: "<<fact<<endl;
    return 0;
}