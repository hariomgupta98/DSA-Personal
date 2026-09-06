#include<iostream>
using namespace std;
int largeThreenum(int a, int b, int c) {
    // int max=a;
    // if(max<b)max = b;
    // if(max<c)max = c;
    return max(a, max(b,c));
}
int main() {
    int a, b, c;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    cout<<"The large number: "<<largeThreenum(a, b, c);
    return 0;
}