#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    Node* next;
    int data;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
public: 
     Node* head;
     Node* tail;

     List(){
        head = NULL;
        tail = NULL;
     }

     void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
     }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

Node* swapPairs(Node* head) {
        if(head == NULL || head->next == NULL) return head;

        Node* first = head;
        Node* sec = head->next;
        Node* prev = NULL;

        while(first != NULL && sec != NULL){
            Node* third = sec->next;
            sec->next = first;
            first->next = third;
            if(prev != NULL) 
            prev->next = sec;
            else head = sec;

            //update
            prev = first;
            first = third;
            if(third != NULL) 
            sec = third->next;
            else sec = NULL;
        }
    return head;
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    cout<<"Before swap: ";
    ll.printList();
    ll.head = swapPairs(ll.head);
    cout<<"After swap: ";
    ll.printList();
    return 0;
}