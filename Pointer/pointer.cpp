#include<iostream>
using namespace std;

// int main() {
    // int a = 10;
    // cout<<&a<<"\n";

//.....
// int a = 10;
// int *ptr = &a;
// // float pi = 3.14;
// // float *ptr2 = &pi;


// //......
// // cout<<&pi<<" = "<<ptr2<<"\n";
// // cout<<&a<<" =  "<<ptr<<"\n";


// //........
// // cout<<sizeof(ptr)<<" "<<"\n";
// // cout<<sizeof(ptr2)<<" "<<"\n";

// int **pptr = &ptr;
// cout<<&ptr<<" = "<<pptr<<"\n";


//......deference 
// int a = 10;
// int *ptr = &a;

// cout<<ptr<<"\n";
// cout<<*ptr<<"\n";

// *ptr = 20;
// cout<<a<<"\n";

//........NULL pointer
// int *ptr = NULL;
// cout<<ptr<<"\n";

// cout<<*ptr<<"\n"; //segmentation error
//     return 0;
// }

//............pass by value
// void changA(int param) {
//     param = 10;
//     cout<<param<<"\n";
// }
// int main() {
//     int a = 20;
//     changA(a);

//     cout<<a<<"\n";
// }

//.....pass by reference
// void changA(int *ptr) {
//     *ptr = 20;
//     cout<<*ptr<<"\n";
// }
// int main() {
//     int a = 10;
//     changA(&a);
//     cout<<a<<"\n";
// }

//.........pass by reference using reference variable
// void changeA(int &param) {
//     param = 20;
//     cout<<param<<"\n";
// }
// int main() {
// int a = 10;
// changeA(a);
// cout<<a<<"\n";

//........what will ptr2 point to in the following code:
// int main() {
    // int x= 5, y = 10;
    // int *ptr1 = &x, *ptr2 = &y;
    // ptr2 = ptr1;
    // cout<<ptr1<<"\n";
    // cout<<ptr2<<"\n";
    // cout<<&x<<"\n";

    //.....initilize a pointer with value 0
    // int *ptr = 0;
    // cout<<ptr<<"\n";

    //......assignment qs
    // int x;
    // int *ptr;
    // x = 7;
    // ptr = &x;
    // cout<<&x;

    //.....assignment qs2
    // void multiBy2(int &a, int &b, int &c) {
    //     a *= 2;
    //     b *= 2;
    //     c *= 2;
    // }
    // int main() {
    //     int x=1, y=2, z=3;
    //     multiBy2(x, y, z);
    //     cout<<x<<y<<z<<"\n";

    //.....q3
    int main() {
    // int a = 32;
    // int *ptr = &a;
    // char ch = 'A';
    // char &cho = ch;
    // cho += a;
    // *ptr += ch;
    // cout<<a<< " , " <<ch<<endl;
    char A = 'a';
    cout<<(int)A<<endl; //97
    return 0;
    }