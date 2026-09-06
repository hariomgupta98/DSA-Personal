#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0, end = n-1; 
    while(st < end) {
        if(str[st++] != str[end--]) {
            cout<<"Not valid palindrom\n";
            return false;
        }
    }
    cout<<"Valid palindrome\n";
    return true;
}
int main() {
    char word[30];
    cout<<"Enter the number: ";
    cin>>word;
    isPalindrome(word, strlen(word));
    return 0;
}
