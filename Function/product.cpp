#include<iostream>
using namespace std;
//..............product 
int prod(int a, int b) {
    return a*b;
}
int main() {
    int p = prod(2, 8);
    cout<<"Product is: "<<p<<endl;
    return 0;
}