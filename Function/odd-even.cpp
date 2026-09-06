#include<iostream>
using namespace std;
//..............odd or even
bool isEven(int n) {
    if(n%2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    cout<<isEven(6)<<endl;
    return 0;
}