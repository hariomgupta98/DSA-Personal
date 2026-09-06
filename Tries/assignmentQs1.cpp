//leetcode 49: Group anagrams
#include<bits/stdc++.h>
using namespace std;
class TrieNode{
public:
    TrieNode* child[26];
    bool isEnd;
    vector<string>group;

    TrieNode(){
        for(int i=0; i<26; i++){
            child[i] = NULL;
        }
        isEnd = false;
    }
};
class Trie{
public:
    TrieNode* root;

    Trie(){
        root = new TrieNode();
    }

    void insert(string &sortedString, string &originalWord){
        TrieNode* curr = root;
        for(int i=0; i<sortedString.size(); i++){
            char ch = sortedString[i];
            int index = ch-'a';

            if(curr->child[index] == NULL){
                curr->child[index] = new TrieNode();
            }
            curr = curr->child[index];
        }
        curr->isEnd = true;
        curr->group.push_back(originalWord);
    }

    void dfs(TrieNode* root, vector<vector<string>> &ans){
        if(root == NULL){
            return;
        }
        if(root->group.size()>0){ //endOfWord
            ans.push_back(root->group);
        }

        for(int i=0; i<26; i++){
            if(root->child[i] != NULL){
                dfs(root->child[i], ans);
            }
        }
    }
};
class solution{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){
        Trie trie;
        for(int i=0; i<strs.size(); i++){

            string originalWord = strs[i];
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
            trie.insert(sortedString, originalWord);
        }

        vector<vector<string>> ans;
        trie.dfs(trie.root, ans);
        return ans;
    }
};
