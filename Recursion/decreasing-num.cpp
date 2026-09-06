#include<iostream>
using namespace std;

void print(int n) {
    if(n==0) { //base case
        return; 
    }
    
    cout<<n<<" "; //kaam
    print(n-1); // faith, next call
}
int main() {
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    print(n);
}