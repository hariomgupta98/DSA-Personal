#include<iostream>
using namespace std;

// int clearPthBit(int num, int p) {
//     int mask = ~(1<<p);
//     num = num&mask;
//     return num;
// }

// int clearBitsInRange(int num, int i, int j) {
//     for(int p=i; p<=j; p++) {
//         num = clearPthBit(num, p);
//     }
//     return num;
// }

//..without loop 
int clearBitsInRange(int num, int i, int j) {
    int mask = ((~0) << (j+1)) | ((1<<i) -1);
    num = num & mask;
    cout<<num<<endl;
    return num;
}

int main() {
    int i=1, j=3;
    int num = 31;
    cout<<"After clearing the bits: "<<clearBitsInRange(num, i, j)<<endl;
    return 0;
}