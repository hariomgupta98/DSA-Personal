#include<iostream>
using namespace std;

class Base {
public:
   virtual void print() {
      cout<<"Base\n";
   }
};

class Drived: public Base{
public:
    void print() {
        cout<<"Drived\n";
    }
};

int main() {
    Base *b = new Drived();
    b->print();

    delete b;
    return 0;
}