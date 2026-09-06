#include<iostream>
using namespace std;
void clearIthBit(int num, int i) {
    int bitMask = ~(0) << i;
    num = num & bitMask;
    cout<<num<<endl;
}
int main() {
    clearIthBit(15, 2);
    return 0;
}