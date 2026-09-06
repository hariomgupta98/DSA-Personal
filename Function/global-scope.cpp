#include<iostream>
using namespace std;
//......global 
int num = 25;
void sum(int a, int b) {
    cout<<num<<endl;
    int sum = a + b;
    cout<<sum<<endl;
}
int main() {
    sum(6, 8);
    cout<<num;
    return 0;
}