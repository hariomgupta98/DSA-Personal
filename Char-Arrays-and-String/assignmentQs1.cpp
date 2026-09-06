#include<iostream>
#include<cstring>
#include<string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int countVowels(string s) {
    int count = 0;
    for(int i = 0; i<s.length(); i++) {
        if(isVowel(s[i])){
            count++;
        }
    }
    return count;
}
int main() {
    string word;
    cout<<"Enter the word: ";
    cin>>word;
    cout<<"Number of vowels: "<<countVowels(word)<<endl;
    return 0;
}