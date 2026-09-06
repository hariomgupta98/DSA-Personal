#include<iostream>
using namespace std;
int main(){
    //reversing a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=n; i>=1; i--) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}