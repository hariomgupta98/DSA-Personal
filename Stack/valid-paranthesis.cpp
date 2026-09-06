#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){ // TC: O(n), SC: O(n)
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }else{ // closing
            if(s.empty()){
                return false;
            }

            //match
            int top = s.top();
            if((top == '(' && ch == ')') || 
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']')){
                    s.pop();
            }else{
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string str1 = "([{])"; // invalid: false;
    string str2 = "({[]})"; //valid: true

    cout<<"Valid : "<<isValid(str1)<<endl;
    cout<<"Invalid: "<<isValid(str2)<<endl;
    return 0;
}