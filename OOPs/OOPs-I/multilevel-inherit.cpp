#include<iostream>
using namespace std;

class Animal{
public:
    void eat() {
        cout<<"The animal is eat.\n";
    }
    void breathe() {
        cout<<"Animal's are breathe.\n";
    }
};

class Mammal : public Animal {
public:
    string bloodType;
    Mammal() {
        bloodType = "Worm";  //constructor
    }
};
class Dog: public Mammal {
public: 
    void tailWag() {
        cout<<"A dog wags its tail.\n";
    }
};
int main() {
    Dog d1;

    d1.eat();
    d1.breathe();
    d1.tailWag();
    cout<<d1.bloodType<<endl;
    return 0;
}