#include<iostream>
using namespace std;

// int main() {
//     int a, b, c;
//     cout<<"Enter the value of A: ";
//     cin>>a;
//     cout<<"Enter the value of B: ";
//     cin>>b;
//     cout<<"Enter the value of C: ";
//     cin>>c;

//     if(a >= b && a >= c) {
//         cout<<"A is largest number = "<<a<<endl;
//     } else if(b >= c) {
//         cout<<"B is largest  number = "<<b<<endl;
//     } else {
//         cout<<"C is largest number = "<<c<<endl;
//     }
//     return 0;
// }

//short
int largThree(int a, int b, int c) {
            return max(a, max(b, c));
}
int main() {
    int a, b, c;
    cout<<"Enter the numbers: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<"Enter the 3rd number: ";
    cin>>c;
    cout<<"Result: "<<largThree(a,b,c)<<endl;
    return 0;
}