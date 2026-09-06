#include<iostream>
using namespace std;
//Abstract class 
class Shape{
public:
    //Pure virtual function
    virtual void area() = 0;
    void display(){
        cout<<"This is a shape.\n";
    }

    //Virtual destructuor
    virtual ~Shape(){
        cout<<"Shape destroyed\n";
    }
};
//Derived class 1
class Circle : public Shape{
public:
    void area() override{
        cout<<"Area of Circle: 3.14 * r * r\n";
    }
};

//Derived class 2
class Rectangle : public Shape{
public:
    void area() override{
        cout<<"Area of Rectangle : lenght * breadth\n";
    }
};
int main(){
    //Shape s; => Not allowed: cannot instantiate abstract class 
    Shape* s1 = new Circle();
    s1->area();
    s1->display();

    Shape* s2 = new Rectangle;
    s2->area();
    s2->display();
    delete s1;
    delete s2;
}

