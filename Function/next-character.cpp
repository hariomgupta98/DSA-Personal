#include<iostream>
using namespace std;
//............next character
char getNextCharacter(char ch){
  if(ch == 'z') {
    return 'a';
  } else {
    cout<<"After the character is: ";
    return ch + 1;
  }
}
int main() {
  char next;
  cout<<"Enter the character: ";
  cin>>next;
  cout<<getNextCharacter(next)<<endl;
  return 0;
}