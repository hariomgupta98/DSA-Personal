#include<iostream>
using namespace std;
class Animal{
public:
     virtual void speak(){
        cout<<"Animal speak"<<endl;
    }
};
class Dog : public Animal{
public: 
    void speak() override{
        cout<<"Dog bark"<<endl;
    }
};
int main(){
    Animal *a = new Dog();
    a->speak();
    delete a;
}

