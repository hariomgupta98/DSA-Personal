#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
   Car() {
    cout<<"Constructor without parameterized\n";
   }
   Car(string name, string color){
    cout<<"Constructor with parameterized\n";
    this->name = name;
    this->color = color;
   }

   void start() {
    cout<<"Car has started..\n";
   }
   void stop() {
    cout<<"car has stopped..\n";
   }
    
   //Getter
   string getName() {
    return name;
   }
};

int main() {
    Car c0; //without para
    Car c1("maruti 800", "white"); // with para
    cout<<"Car name: "<<c1.getName()<<endl;
    return 0;
}
