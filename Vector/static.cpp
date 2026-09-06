#include<iostream>
using namespace std;

void funInt() {
    int *ptr = new int;
    *ptr = 5; 
    cout<<*ptr;
    delete ptr;
}
void funArr() {
    int size;
    cout<<"Enter the number: ";
    cin>>size;
    int *ptr = new int[size];
    int x = 1;
    for(int i=0; i<size; i++) {
        ptr[i] = x;
        cout<< ptr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete[] ptr; //free
}
int main() {
    funInt();
    return 0;
}