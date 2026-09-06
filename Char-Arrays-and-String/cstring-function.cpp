#include<iostream>
#include<cstring>
using namespace std;

int main() {

       //--strcpy(dest,src)
    // char str1[100];
    // strcpy(str1, "Hello DSA");
    // cout<<str1<<endl;

     //--strcat(str1, str2)
    // char str1[100] = "Hello";
    // char str2[200] = " DSA";
    // strcat(str1, str2);
    // cout << str1 << endl;

     //---strcmp(str1, str2)
    char str1[100] = "abc";
    char str2[100] = "xyz";
    cout<<strcmp(str1, str2)<<endl;
    return 0;
}