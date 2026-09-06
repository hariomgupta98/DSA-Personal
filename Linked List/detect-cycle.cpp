#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
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
            newNode->next=head;
            head = newNode;
        }
    }
};

    void printList(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    bool isCycle(Node* head){
        Node* slow = head; //+1
        Node* fast = head; //+2

         while(fast != NULL && fast->next != NULL){
            slow = slow->next; 
            fast = fast->next->next;

            if(slow==fast){
                cout<<"Cycle exists\n";
                return true;
            }
        }
        cout<<"Cycle doesn't exists\n";
        return false;
    }

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    //ll.tail->next = ll.head; //cycle doesn't exist
    isCycle(ll.head);
    return 0;
}
