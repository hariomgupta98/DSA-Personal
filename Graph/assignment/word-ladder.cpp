#include<bits/stdc++.h>
using namespace std;

//function to calculate the shortest transformation sequence length
int wordLadderLength(string startWord, string targetWord, vector<string> &wordList){
    //queue for bfs sorting {current word, step taken}
    queue<pair<string, int>> q;
    q.push({startWord, 1});

    //set for quick lookup and deletion
    unordered_set<string> st(wordList.begin(), wordList.end());
    st.erase(startWord);

    while(!q.empty()){
        string word = q.front().first;
        int steps = q.front().second;
        q.pop();

        //if targer word is found, return steps
        if(word == targetWord) return steps;
        //try changing every character in the current word
        for(int i=0; i<word.size(); i++){
            char original = word[i];
            for(char ch='a'; ch<='z'; ch++){
                word[i] = ch; //replacing the character
                if(st.find(word) != st.end()){
                    st.erase(word);
                    q.push({word, steps+1});
                }
            }
            word[i] = original;
        }
    }
    //if no sequence exists
    return 0;
}

int main(){
    vector<string> wordList = {"des", "der", "dfr", "dgt", "dfs"};
    string startWord = "der", targetWord = "dfs";
    cout<<wordLadderLength(startWord, targetWord, wordList)<<endl;
    return 0;
}

/*
TC: O(N*L*26)
where N is the number of words in the list and L is the length of each word. 
For each word, we attempt to change each of its L characters to 26 possible letters.

SC: O(N*L)
*/