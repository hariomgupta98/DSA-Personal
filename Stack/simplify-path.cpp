#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
    vector<string> pathVector;
    string curr = "";
    for(int i=0; i<path.size(); i++){
        if(path[i] == '/'){
            pathVector.push_back(curr);
            curr = "";
        }else{
            curr += path[i];
        }
    }
    if(curr != ""){
        pathVector.push_back(curr);
    }

    stack<string> st;
    for(int i=0; i<pathVector.size(); i++){
        if(pathVector[i] == ""){
            continue;
        }
        if(pathVector[i] == "."){
            continue;
        }
        if(pathVector[i] == ".."){
            if(!st.empty())
              st.pop();
        }else{
            st.push(pathVector[i]);
        }
    }
    string result = "";
    while(!st.empty()){
        string top = st.top();
        st.pop();
        result = "/" + top + result;
    }
    if(result == "")
    return "/";
    return result;
}
//leetcode: 71