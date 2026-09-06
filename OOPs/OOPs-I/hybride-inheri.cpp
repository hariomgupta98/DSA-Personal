#include<iostream>
using namespace std;
class A{
public:
    void showA(){
        cout<<"Class A\n";
    }
};
class B : public A{
public:
    void showB(){
        cout<<"Class B(Derived class A)\n";
    }
};
class C : public A{ //public B now perform => ambiguity
public:
    void showC(){
        cout<<"Class C (Derived class A)\n";
    }
};
class D : public B, public C{
public:
    void showD(){
        cout<<"Class D (Deriveds class B & C)\n";
    }
};
int main(){
    A a;
    a.showA();
    B b;
    b.showB();
    C c;
    c.showC();
    D d;
    d.showD();

}