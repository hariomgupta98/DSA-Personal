#include<iostream>
using namespace std;
//...............syntax parameter
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int s = sum(2, 4);
    cout<<"Sum = "<<s<<endl;
    return 0;
}