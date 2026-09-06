#include<bits/stdc++.h>
using namespace std;

string decodeString(string s){
    stack<int> st;
    stack<string> st1;
    string curr;
    int n = 0;

    for(char c : s){
        if(isdigit(c)){
            n = n * 10 + (c - '0');
        }else if(c == '['){
            st.push(n);
            n = 0; 
            st1.push(curr);
            curr = "";
        }else if( c == ']'){
            int k = st.top();
            st.pop();
            string temp = curr;
            curr = st1.top();
            st1.pop();
            while(k-- > 0){
                curr += temp;
            }
        }else{
            curr += c;
        }
    }
    return curr;
}

//leet code : 394

