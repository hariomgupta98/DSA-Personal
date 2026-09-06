#include<iostream>
using namespace std;
// int main() {
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(short int)<<endl;
//     return 0;
// }

//........binary to decimal
    void binToDecimal(int binNum) {
        int n = binNum;
        int decimalNum = 0;
        int pow = 1; //2^0, 2^1, 2^2

        while(n>0) {
            int lastDigit = n%10;
            decimalNum += lastDigit * pow;
            pow *= 2;
            n /= 10;
        }
        cout<<"The decimal number is: ";
        cout<<decimalNum<<endl;
    }
    int main () {
        int n;
        cout<<"Enter the binary number: ";
        cin>>n;
        binToDecimal(n);
        // cout<<endl;
        return 0;
    }

