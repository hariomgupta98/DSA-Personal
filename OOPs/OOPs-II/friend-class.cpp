#include<iostream>
using namespace std;

//in class
class A {
    string secret = "Secrect data";
    friend class B;
    friend void revealSecret(A &obj);
};

class B {
public:
    void showSecret(A &obj) {
        cout<<obj.secret<<endl;
    }
};

//in function
void revealSecret(A &obj) {
    cout<<obj.secret<<endl;
}

int main() {
    A a1;
    B b1;

    b1.showSecret(a1);
    return 0;
}