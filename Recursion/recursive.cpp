#include<iostream>
using namespace std;

void fun() {
    cout<<"Function call..work\n";
    fun();
}
int main() {
    fun();
    return 0;
}