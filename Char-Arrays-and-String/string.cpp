#include<iostream>
#include<string>
using namespace std;

int main() {
    // string str = "Hello";
    // cout<<str<<endl;
    // str = "DSA";
    // cout<<str<<endl;

    //  //--for user through
    // cout<<"Enter the word: ";
    // string str;
    // getline(cin, str, '$');
    // cout<<str<<endl;

    // //---for spacifice char print
    cout<<"Enter the word: ";
    string str;
    getline(cin, str);
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;

    // //-----for each loop
    // string str = "Hello Sir";
    // for(char ch : str) {
    //     cout<<ch<<".";
    // }
    // cout<<endl;



    // //---member function
    // string str = "Hello DSA";
    // cout<<str.length()<<endl;
    // cout<<str.at(4)<<endl;
    // cout<<str.substr(1, 5)<<endl;

    // //---str.find
    // string str = "I love coding in c++ & c++. I don't like java";
    // cout<< str.find("c++", 20)<<endl; // 20 is lenght
    // cout<< str.find("python")<<endl; // not excite give a big value
    return 0;
}
