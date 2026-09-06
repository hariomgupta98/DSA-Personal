#include<iostream>
using namespace std;
class Car{
    public:
       string name;
       string color;
       int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //Dynamic Allocation
        *mileage = 12;
    }

    Car(Car &original) {
        cout<<"Copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;      //add only this line and next line add *(address)
        *mileage = *original.mileage;
    }
};

int main() {
    Car c1("Maruti 800", "Black");
    Car c2(c1);
    cout<<"The name of the car: "<<c2.name<<endl;
    cout<<"The color of the car: "<<c2.color<<endl;
    cout<<"The car mileage: "<<*c2.mileage<<endl;

    *c2.mileage = 10;
    cout<<"Not changing the mileage in car: "<<*c1.mileage<<endl; //12
    return 0;
}