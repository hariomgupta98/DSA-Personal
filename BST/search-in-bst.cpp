#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val){
    if(root == NULL){
       root = new Node(val);
       return root;
    }
    if(root->data > val){ //left subtree
        root->left = insert(root->left, val);
    }else{ //right subtree
        root->right =insert(root->right, val);
    }
    return root;
}
Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i=0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}
bool search(Node* root, int key){ //O(Height): avg => O(log n)
    if(root == NULL){
        return false;
    }

    if(root->data == key) return true; //found

    if(root->data > key){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    } 
}
int main(){
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node* root = buildBST(arr, 9);
    cout<<search(root, 16);
    return 0;
}

