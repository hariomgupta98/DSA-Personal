#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

string alienOrder(vector<string> &words){
    unordered_map<char, unordered_set<char>> adjList;
    unordered_map<char, int> inDegree;

    for(const string &word : words){
        for(char ch : word){
            inDegree[ch] = 0;
        }
    }
    for(int i=0; i<words.size()-1; i++){
        string w1 = words[i];
        string w2 = words[i+1];
        int minLen = min(w1.length(), w2.length());

        if(w1.length() > w2.length() && w1.substr(0, minLen) == w2.substr(0, minLen)){
            return "";
        }

        for(int j=0; j<minLen; j++){
            if(w1[j] != w2[j]){
                char parent = w1[j];
                char child = w2[j];

                if(adjList[parent].find(child) == adjList[parent].end()){
                    adjList[parent].insert(child);
                    inDegree[child]++;
                }
                break;
            }
        }
    }
    
    queue<char> q;
    for(auto &pair: inDegree){
        if(pair.second == 0){
            q.push(pair.first);
        }
    }

    string result = "";
    while(!q.empty()){
        char curr = q.front();
        q.pop();
        result += curr;

        for(char neighbor : adjList[curr]){
            inDegree[neighbor]--;
            if(inDegree[neighbor] == 0){
                q.push(neighbor);
            }
        }
    }
    if(result.size() < inDegree.size()){
        return "";
    }
    return result;
}

int main(){
    vector<string> words = {"wrt", "wrf", "er", "ett", "rftt"};
    cout<<alienOrder(words);
    return 0;
}