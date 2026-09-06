#include<iostream>
#include<string>
using namespace std;

 bool isAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) {
        cout<<"Not valid anagram\n";
        return 0;
    }
    int count[26] = {0};
    for(int i=0; i<str1.length(); i++) {
        count[str1[i] - 'a']++;
    }
    for(int i=0; i<str2.length(); i++) {
        if(count[str2[i] - 'a'] == 0) {
            cout<<"Not valid anagrams\n";
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout<<"Valid anagrams\n";
    return true;
}

 int main() {
    string str1 = "dnagram";
    string str2 = "margand";
    isAnagram(str1, str2);
    return 0;
}


// //--comparition operator;
// int main() {
//     string str1 = "Dog";
//     string str2 = "Cat";
//     cout<<(str1<str2)<<endl;
// }