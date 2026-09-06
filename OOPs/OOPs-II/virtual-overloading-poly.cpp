#include<iostream>
using namespace std;

class Parent{
public:
     void show() {
        cout<<"Parent class is call\n";
    }
    virtual void hello() {
        cout<<"Parent call\n";
    }
};
class Child : public Parent {
public:
    void show() {
        cout<<"Child class is call\n";
    }
    virtual void hello() {
        cout<<"Child call\n";
    }
};

int main() {
    Child childd1;
    Parent *ptr;
    ptr = &childd1; //Run time binding
    ptr->hello(); //Virtual function
    return 0;
}