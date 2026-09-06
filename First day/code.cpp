/*#include<iostream>
using namespace std;

int main() {
    float pencile, pen, eraser;
    cout<<"Enter the price of pencile: ";
    cin>>pencile;
    
    cout<<"Enter the price of pen: ";
    cin>>pen;

    cout<<"Enter the price of eraser: ";
    cin>>eraser;

    float total = pencile + pen + eraser;
    cout<<"Total price: "<<total<<endl;
    cout<<"The total price after 18% GST: "<<total + (total * 0.18)<<endl;

    return 0;
}*/

// #include<iostream>
// using namespace std;

// int main() {
//     int radius;
//     cout<<"Enter the radius of circle: ";
//     cin>>radius;

//     float area = 3.14 * radius * radius;
//     cout<<"The area of circle is: "<<area<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     float P, R, T;
//     cout<<"Enter the principal amount: ";
//     cin>>P;

//     cout<<"Enter the rate amount: ";
//     cin>>R;

//     cout<<"Enter the time period: ";
//     cin>>T;

//     float SI = (P*R*T)/100;
//     cout<<"The simple interest is: "<<SI<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

class Height {
    int feet;
    double inches;
public: 
    Height() {
        feet = 0;
        inches = 0.0;
    }
    void setheightfromfeet(int f) {
        feet = f;
        inches = 0;
    }
    void setheightfromdouble(double d) {
        feet = (int)d;
        inches = (d - feet) * 12;
    }
    void setheightfromfeetinches(int f, int in) {
        feet = f;
        inches = in;
    }
    void show() {
        cout << "Feet=" << feet << " inches=" << inches << endl;
    }
};

int main() {
    Height h1, h2, h3;
    int ft;
    double d;
    int ft2, in2;
    cin >> ft;
    cout<<"Enter the ft:- ";
    cin >> d;
    cout<<"Enter the d:- ";
    cin >> ft2;
    cout<<"Enter the ft2:- ";
    cin>>in2;
    cout<<"Ente the in2:- ";
    h1.setheightfromfeet(ft);
    h2.setheightfromdouble(d);
    h3.setheightfromfeetinches(ft2, in2);
    
    h1.show();
    h2.show();
    h3.show();
}
