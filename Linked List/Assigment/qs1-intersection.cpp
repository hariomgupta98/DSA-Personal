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

class List {
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
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
};

int getSize(Node* head){
    int size = 0;
    while(head != NULL){
        head = head->next;
        size++;
    }
    return size;
}

Node* getIntersectionNode(Node* headA, Node* headB){
    int m = getSize(headA);
    int n = getSize(headB);

    Node* t1 = headA;
    Node* t2 = headB;
    int diff = 0;
    if(m >= n) {
        diff = m-n;
        for(int i=0; i<diff; i++){
        t1 = t1->next;
        }
    }else{
        diff = n-m;
        for(int i=0; i<diff; i++){
        t2 = t2->next;
        }
    }

    while(t1 != NULL && t2 != NULL && t1 != t2){
        t1 = t1->next;
        t2 = t2->next;
    }
    if(t1 == NULL) return NULL;
    else return t1;
}
    

int main(){

    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    n6->next = n7;

    List listA;
    listA.push_back(1);
    listA.push_back(2);
    listA.push_back(3);
    listA.tail->next = n6;
    listA.tail = n7;

    List listB;
    listB.push_back(4);
    listB.push_back(5);
    listB.tail->next = n6;
    listB.tail = n7;

    cout<<"List A: ";
    listA.printList();
    cout<<"List B: ";
    listB.printList();

    Node* intersect = getIntersectionNode(listA.head, listB.head);
    cout<<"Intersection node data: ";
    if(intersect != NULL)
    cout<<intersect->data<<endl;
    else
    cout<<"NULL\n"<<endl;
    return 0;
}
