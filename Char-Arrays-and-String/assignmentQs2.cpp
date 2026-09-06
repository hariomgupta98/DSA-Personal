//Leetcode qs: 1790
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    if(s1 == s2) {
        return true;
    }
    int s1FrequencyMap[30] = {0};
    int s2FrequencyMap[30] = {0};
    int numDiffs = 0;

    for(int i = 0; i < s1.size(); i++) {
        char s1Char = s1[i];
        char s2Char = s2[i];

        if(s1Char != s2Char) {
            numDiffs++;
            //numDiffs is more than 2, one string swap will not make two
            // strings equal
            if(numDiffs > 2) return false;
        }

        //increment frequencies
        s1FrequencyMap[s1Char - 'a'] ++;
        s2FrequencyMap[s2Char - 'a']++;
    }

    //Chech if frequencies are equal;
    for(int i=0; i<30; i++) {
        if(s1FrequencyMap[i] != s2FrequencyMap[i]) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first word: ";
    cin >> s1;
    cout << "Enter second word: ";
    cin >> s2;
    cout << areAlmostEqual(s1, s2) << endl;
    return 0;
}

