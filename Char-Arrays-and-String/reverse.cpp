#include<iostream>
#include<string.h>
using namespace std;

void reverse(char word[], int n) {
    int st=0, end=n-1;
    while(st<end) {
        swap(word[st++], word[end--]);
    }
}
int main() {
    char word[30];
    cout<<"Enter the word: ";
    cin.getline(word, 30);
    reverse(word, strlen(word));
    cout<<"The reversed word is: "<<word<<endl;
    return 0;
}
