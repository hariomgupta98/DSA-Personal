#include<iostream>
using namespace std;
void decToBinary(int decNum) {
        int n = decNum;
        int pow = 1;//10^0, 10^1..
        int binNum = 0;
        while(n > 0) {
            int rem = n % 2;
            binNum += rem * pow;
            n /= 2;
            pow *= 10;
        }
        cout<<"The binary number is: ";
        cout<<binNum<<endl;
    }
    int main() {
        int num;
        cout<<"Enter the decimal number: ";
        cin>>num;
        decToBinary(num);
    return 0;
}