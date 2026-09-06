#include<iostream>
using namespace std;
//..........palindrom number
int reverse(int n) {
    int res = 0;
    while(n>0) {
      int lastDigit = n%10;
      res = res*10 + lastDigit;
      n = n/10;
    }
    return res;
}
bool isPalindrom(int num) {
  int revNum = reverse(num);
  return num == revNum;
}
// ...existing code...
int main() {
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  if(isPalindrom(num)) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not Palindrome" << endl;
  }
  return 0;
}