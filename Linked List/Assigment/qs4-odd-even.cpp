#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

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

Node* OddEvenList(Node* head){
    if(head == NULL || head->next == NULL || head->next->next == NULL){
        return head;
    }

    Node* evenStart = head->next;
    Node* odd = head;
    Node* even = head->next;

    while(odd->next && even->next){
        odd->next = even->next;
        even->next = odd->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    return head;
}
int main(){
    List ll;
    cout<<"before list: ";
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();

    OddEvenList(ll.head);
    cout<<"after list: ";
    ll.printList();
    return 0;
}

//Leetcode: 328