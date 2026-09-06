#include<iostream>
using namespace std;

class Parent{
public:
    void show() {
        cout<<"Parents class is call..\n";
    }
};
class Child : public Parent {
public:
    void show() {
    cout<<"Child class is call..\n";
    }
};
int main() {
    Child childd1;
    childd1.show();
    return 0;
}