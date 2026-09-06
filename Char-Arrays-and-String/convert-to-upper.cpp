#include<iostream>
#include<string.h>
using namespace std;
void toUpperCase(char word[], int n) {
    for(int i=0; i<n; i++) {
        char ch = word[i]; 
        if(ch>='A' && ch<='Z'){ //upper case
            continue;
        }else{ // lower case
            word[i] = ch - 'a' + 'A';
        }
    }
}
int main() {
    cout<<"Enter the mix word(upper + lower): ";
    char word[30];
    cin.getline(word, 30);
    toUpperCase(word, strlen(word));
    cout<<"All upper case words: "<<word<<endl;
    cout<<"Length is: "<<strlen(word)<<endl;
    return 0;
}