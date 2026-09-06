#include<iostream>
using namespace std;
class Complex{
public:
    int real, imag;
    Complex(int r, int i){
        this->real = r;
        this->imag = i;
    }
    // overload '+' operator
    Complex operator + (const Complex &obj){
        return Complex(real + obj.real, imag + obj.imag);
    }
    void show(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(2, 3), c2(5, 4);
    Complex c3 = c1 + c2;
    c3.show();
    return 0;
}