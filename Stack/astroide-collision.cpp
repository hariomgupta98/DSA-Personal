#include<bits/stdc++.h>
using namespace std;

//Leetcode: 78
vector<int> asteroidCollision(vector<int> &ast){
    stack<int> s;
    int n = ast.size();
    for(int i=0; i<n; i++){
        if(ast[i] > 0 || s.empty()){
            s.push(ast[i]);
        }else{
            while(!s.empty() && s.top() > 0 && s.top() < abs(ast[i])){
                s.pop();
            }
            if(!s.empty() && s.top() == abs(ast[i])){
                s.pop();
            }else{
                if(s.empty() || s.top() < 0){
                    s.push(ast[i]);
                }
            }
        }
    }
    
    vector<int> res(s.size());
    for(int i=(int)s.size()-1; i>=0; i--){
        res[i] = s.top();
        s.pop();
    }
    return res;
}


int main(){
   vector<int> num = {3, 5, -6, 2, -7, 8};
   vector<int> result = asteroidCollision(num);

   for(int i=0; i<result.size(); i++){
    cout<<result[i];
    if(i<result.size()-1) cout<<", ";
   }
   cout<<endl;
    return 0; 
}