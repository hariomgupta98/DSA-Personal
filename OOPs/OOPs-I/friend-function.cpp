#include<iostream>
using namespace std;
class car{
private:
    string engineNumber;
public:
    car(){
        engineNumber = "XYZ54221";
    }

    //declare mechanic as a friend function
    friend class mechanic;
};
class mechanic{
public:
    void checkEngine(car c){
        cout<<"Accessing engine number: "<<c.engineNumber<<endl;
    }
};
int main(){
    car myCar;
    mechanic m;
    m.checkEngine(myCar); //can access private member
    return 0;
}