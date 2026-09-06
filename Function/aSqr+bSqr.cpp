#include<iostream>
using namespace std;
//............(A^2 + B^)
int abSquare(int a, int b) {
  return a*a + b*b + 2*a*b;
}
int main() {
  int a, b;
  cout<<"Enter the number of A: ";
  cin>>a;
  cout<<"Enter the number of B: ";
  cin>>b;
  cout<<abSquare(a, b)<<endl;
  return 0;
}


//funuction...
// int square(int a, int b) {
//     return a*a + b*b + 2*a*b;
// }
// int main() {
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
// cout<<"Result: "<<square(a, b)<<endl;
