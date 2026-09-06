#include<iostream>
using namespace std;
//.......sum of digit of number
int sumDigit(int n) {
  int res = 1;
  while(n>1) {
    res += n % 10;
    n /= 10;
  }
  return res;
}
int main() {
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<sumDigit(num)<<endl;
  return 0;
}