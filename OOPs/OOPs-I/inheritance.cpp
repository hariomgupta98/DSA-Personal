#include<iostream>
using namespace std;

class Animal{
public:
    string color;

    void eat() {
        cout<<"Animal is eats\n";
    }
};
class Fish : protected Animal{
public: 
    int fins;

    void swim() {
        cout<<"The fish is swiming\n";
    }
    void eat() {
        cout<<"Fish is eat\n";
    }
};
int main() {
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;

    f1.swim();
    f1.eat();
    return 0;
}