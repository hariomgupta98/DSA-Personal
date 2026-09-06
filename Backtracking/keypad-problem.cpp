#include<bits/stdc++.h>
using namespace std;

void solve(string digit, string output, int index, vector<string>&ans, string mapping[]){
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }
    int number = digit[index]-'0'; // convert char in int
    string value = mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        //recurssive call
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCombination(string digits){
    vector<string>ans;

    if(digits.length() == 0) return ans;

    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}
int main(){
    string digits = "23";
    vector<string> result = letterCombination(digits);

    for(string s : result){
        cout << s << " ";
    }
    return 0;
}