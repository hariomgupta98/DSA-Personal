#include<iostream>
using namespace std;

void sayHello () {
    cout<<"Hello Gupta:)\n";
}
void assistant () {
    sayHello();
    cout<<"Work done.\n";
}

int main() {
    assistant();
    return 0;
}