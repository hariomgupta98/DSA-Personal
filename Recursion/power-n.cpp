#include<bits/stdc++.h>
using namespace std;

// int pow(int x, int n) {
//     if(n==0) { //base case
//         return 1;
//     }
//     int halfPow = pow(x, n/2); // kaam
//     int halfPowSquare = halfPow*halfPow;
//     if(n%2 != 0) { 
//         return x * halfPowSquare; //odd 
//     }
//     return halfPowSquare; //even
// }
// int main() {
//     int num, power;
//     cout<<"Enter the number: ";
//     cin>>num;
//     cout<<"Enter the power number: ";
//     cin>>power;
//     cout<<"The answer is: "<<pow(num, power)<<endl;
//     return 0;
// }



//second method
int power(int a, int n) {
    if(n==0) {
        return 1;
    }
    if(n%2 == 1) {
        int b = power(a, n/2);
        return b * b * a;
    }else{
        int b = power(a, n/2);
        return b * b;
    }
}
int main() {
    int a, n;
    cout<<"Enter the value you want to calculate\n";
    cout<<"Enter the value of number: ";
    cin>>a;
    cout<<"Enter the power of number: ";
    cin>>n;
    cout<<"Result is: "<<power(a, n)<<endl;
    return 0;
}