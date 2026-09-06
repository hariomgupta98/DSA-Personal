#include<iostream>
using namespace std;

//---in  function
/*void counter() {
    static int count = 0;
    count++;
    cout<<"Count: "<<count<<endl;
};
int main() {
    counter();
    counter();
    counter();
    return 0;
} */

//--in class 
class Example{
public:
    static int x;
};
int Example :: x = 4;
int main() {
    Example eg1;
    Example eg2;
    Example eg3;

    cout<<"The 1st number: "<<eg1.x++<<endl;
    cout<<"The 2nd number: "<<eg2.x++<<endl;
    cout<<"The 3rd number: "<<eg3.x++<<endl;
    return 0;

}