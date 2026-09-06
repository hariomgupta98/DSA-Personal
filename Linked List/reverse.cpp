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
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    void reverse(){
        Node* curr = head; //initillize curr,prev
        Node* prev = NULL;
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            //updations for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};
int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); 

    ll.reverse();
    ll.printList();
    return 0;
}
