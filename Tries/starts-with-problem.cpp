#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }
};
class Trie {
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string key){
        Node* temp = root;
        for(int i=0; i<key.size(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node(); //insert
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    //searching but not need in this code
    bool search(string key){
        Node* temp = root;
        for(int i=0; i<key.size(); i++){
            if(temp->children.count(key[i])) {
                temp = temp->children[key[i]];
            }else{
                return false;
            }
        }
        return temp->endOfWord;
    }

    bool startsWith(string prefix){ //O(n)
        Node* temp = root;
        for(int i=0; i<prefix.size(); i++){
            if(temp->children[prefix[i]]){
                temp = temp->children[prefix[i]];
            }else{
                cout<<"Not exists: "<<prefix<<endl;
                return false;
            }
        }
        cout<<"Exits: "<<prefix<<endl;
        return true;
    }
};
int main(){
    vector<string> word = {"apple", "app", "mango", "man", "woman"};
    Trie trie;
    for(int i=0; i<word.size(); i++){
        trie.insert(word[i]);
    }
    cout<<trie.startsWith("app")<<endl;
    return 0;
}