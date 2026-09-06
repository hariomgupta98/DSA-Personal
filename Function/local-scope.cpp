#include<iostream>
using namespace std;
//............local scope
void sum(int a, int b) {
    int s = a + b;
    cout<<s;
}
int main() {
    sum(5, 4);
    int s = 10;
    cout<<s;
    return 0;
}