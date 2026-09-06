#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(Node* head){
    if(head == NULL) return true;
    if(head-next-next == NULL){
        return head->val == head->next->val;
    }

    Node* slow = head;
    Node* fast = head;
    Node* temp = head;
    Node* prev = NULL;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    while(slow){
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
     
    while(prev){
        if(prev->val != head->val){
            return false;
            prev = prev->next;
            head = head->next;
        }
    }
    return true;
}

void push_back(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail  = newNode;
    }else{
        tail->next = newNode
        tail = newNode;
    }
}
void printList(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

//leet code 234