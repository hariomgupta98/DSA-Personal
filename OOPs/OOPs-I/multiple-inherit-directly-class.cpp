#include<iostream>
using namespace std;
class A{
public:
    void showA(){
        cout<<"Class A\n";
    }
};
class B{
public:
    void showB(){
        cout<<"Class B\n";
    }
};
class C : public A, public B{
public:
    void showC(){
        cout<<"Class c\n";
    }
};
int main(){
    A a;
    a.showA();
    B b;
    b.showB();
    C c;
    c.showC();
}