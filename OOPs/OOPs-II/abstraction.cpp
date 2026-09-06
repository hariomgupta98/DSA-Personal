#include<iostream>
using namespace std;

//abstrace class
class Shape{
public:
    virtual void draw() = 0; //abstracr fnx, pure virtual fnx
};

class Circle : public Shape {
public:
    void draw() {
        cout<<"Draw circle\n";
    }
};

class Square : public Shape {
public:
    void draw() {
        cout<<"Draw square\n";
    }
};

int main() {
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();
    return 0;
}