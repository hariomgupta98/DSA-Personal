#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head; 
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }
};

Node* removeNthEnd(Node* head, int n){
    Node* slow = head;
    Node* fast = head;

    while(n--){
        fast = fast->next;
    }
    if(fast == NULL) 
    return head->next;

    Node* prev = NULL; 
    while(fast != NULL){
        prev = slow;
        slow = slow->next; 
        fast = fast->next;
    }

    prev->next = slow->next;
    return head;
}