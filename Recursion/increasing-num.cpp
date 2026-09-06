#include<iostream>
using namespace std;
void print(int n) {
    if(n==0){
        return;
    }
    print(n-1); //reverse kar denge to decreaing -num milega
    cout<<n<<" ";
}
int main() {
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    print(n);
}