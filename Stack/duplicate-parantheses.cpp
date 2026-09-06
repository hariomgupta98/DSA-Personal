#include<bits/stdc++.h>
using namespace std;


bool isDuplicate(string str){
    stack<char>s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch != ')') { //non-closing
            s.push(ch);
        }else{ //closing
            if(s.top() == '('){
                return true; //duplicate
            }

            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}
int main(){
    string str1 = "((a+b))"; //invalid: false
    string str2 = "((a+b) + (c+d))"; //valid: true

    cout<<"Duplicate: "<<isDuplicate(str1)<<endl;
    cout<<"Non Duplicate: "<<isDuplicate(str2)<<endl;
    return 0;
}