#include<iostream>
#include<string.h>
using namespace std;
int main() {
    // char work[] = {'c', 'o', 'd', 'e', '\0'};
    // cout<< strlen(work)<<endl;

    // cout<<"Hello DSA"<<endl; // string litterals
    // cout<<"a"<<endl; //string literals

    // //---for input
    // cout<<"Enter your word: ";
    // char word[100];
    // cin>>word; //ignore whitespace
    // cout<<"Your word is : "<<word<<endl;
    // cout<<"Length of this word: "<<strlen(word)<<endl;

    //---for input with whitespace
    cout<<"Enter the sentence: ";
    char sentence[10];
    cin.getline(sentence, 10, '*');
    cout<<"Your word is: "<<sentence<<endl;
    cout<<"Length is: "<<strlen(sentence)<<endl;
    return 0;
}