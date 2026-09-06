#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

vector<int> seprateDigit(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    for(int n : nums){
        string s = to_string(n); // interger to string
        for(char ch : s){
            ans.push_back(ch - '0'); //convert in string to interger
        }
    }
    return ans;
}
int main(){
    vector<int> num;
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    num.push_back(n); //store in vector's number

    vector<int> res = seprateDigit(num);
    cout<<"After the spacing: ";
    for(int digit : res){
        cout<<digit<<" ";
    }
    cout<<endl;
    return 0;
}

//Leetcode : 2553