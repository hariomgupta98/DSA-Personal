#include<iostream>
#include<string>
using namespace std;
char nextChar(char ch) {
    if(ch == 'z') return 'a';
    if(ch == 'Z') return 'A';
    return ch+1;
}
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Next charatcter: "<<nextChar(ch)<<endl;

return 0;
}