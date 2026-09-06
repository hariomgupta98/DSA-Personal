#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }
    Car(Car &original) {
        cout<<"Copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};
int main() {
    Car c1("maruti 800", "black");
    
    Car c2(c1); // custom copy
    cout<<"The car name is: "<<c2.name<<endl;
    cout<<"And the color is: "<<c2.color<<endl;
    return 0;
}