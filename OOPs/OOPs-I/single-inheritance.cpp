#include<iostream>
using namespace std;
class A{
public:
    void showA(){
        cout<<"Base class A\n";
    }
};
class B : public A{
public: 
    void showB(){
        cout<<"Derived class B\n";
    }
};
int main(){
    A a;
    a.showA();
    B b;
    b.showB();
}