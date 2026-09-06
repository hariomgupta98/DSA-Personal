#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    unordered_map<char, Node*> children;
    bool endOfWord;
    int freq;

    Node(){
        endOfWord = false;
    }
};
class Trie{
    Node* root;
public:
    Trie() {
        root = new Node();
        root->freq = -1;
    }

    void insert(string key){
        Node* temp = root;
        for(int i=0; i<key.size(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node(); //insert;
                temp->children[key[i]]->freq = 1;
            }else{
                temp->children[key[i]]->freq++;
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    string getPrefix(string key){ //O(L)
        Node* temp = root;
        string prefix = "";
        for(int i=0; i<key.size(); i++){
            prefix += key[i];
            if(temp->children[key[i]]->freq == 1){
                return prefix;
            }
            temp = temp->children[key[i]];
        }
        return prefix;
    }
};

void prefixProblem(vector<string> dict){ //O(n*L)
    Trie trie;
    for(int i=0; i<dict.size(); i++){
        trie.insert(dict[i]); 
    }

    for(int i=0; i<dict.size(); i++){
        cout<<"The prefix for "<<dict[i]<<" is : "<<trie.getPrefix(dict[i]);
        cout<<endl;
    }
}
int main(){
    vector<string> dict = {"zebre", "dog", "dove", "duck"};
    prefixProblem(dict);
    return 0;
}