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

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
};

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
void removeCycle(Node* head){
    //detect cycle
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            cout<<"Cycle exists\n";
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
        cout<<"Cycle doesn't exists\n";
        return;
    }

    slow = head;
    Node* prev = fast;
    if(slow == fast){ // special case: tail->head
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL; //remove cycle

    }else{
        while(slow != fast){
            slow->next;
            prev = fast;
            fast= fast->next;
        }
        prev->next = NULL; //remove cycle
    }
}

int main(){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //1->2->3->4->1
    ll.tail->next = ll.head;
    removeCycle(ll.head);
    printList(ll.head);
}