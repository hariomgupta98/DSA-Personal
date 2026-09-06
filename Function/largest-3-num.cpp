#include<iostream>
using namespace std;
//........3 largest number
int largestNumber(int a, int b, int c){
  if(a>=b && a>=c){
    cout<<"Largest number is ";
    return a;
  } else if(b>=c) {
    cout<<"Largest number is ";
    return b;
  } else {
    cout<<"Largest number is ";
    return c;
  }
}
int main() {
  int x, y, z;
  cout<<"Enter the number of 1st: ";
  cin>>x;
  cout<<"Enter the number of 2nd: ";
  cin>>y;
  cout<<"Enter the number of 3rd: ";
  cin>>z;
  cout<<largestNumber(x, y, z)<<endl;
  return 0;
}