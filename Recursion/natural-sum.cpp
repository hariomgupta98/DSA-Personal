#include<iostream>
using namespace std;
int sum(int n) {
    if(n==1){
        return 1;
    }
   return n+sum(n-1);
}
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number is: "<<sum(num)<<endl;
    return 0;
}