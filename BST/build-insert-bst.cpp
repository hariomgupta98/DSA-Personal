#include<iostream>
#include<vector>
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

Node* insert(Node* root, int val){ //O(log n)
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){ //left subtree
        root->left = insert(root->left, val);
    } else { //rihgt subtree
        root->right = insert(root->right, val);
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

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    //int arr[6] = {5, 1, 3, 4, 2, 7};
    int arr[9] = {8, 1, 3, 4, 6, 10, 11, 14, 5};
    Node* root = buildBST(arr, 9);
    inorder(root);
    cout<<endl;
    return 0;
}