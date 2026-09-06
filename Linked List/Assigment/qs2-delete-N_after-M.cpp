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

Node* deleteNodes(Node* head, int m, int n){
    auto pre = head;
    while(pre){
        for(int i=0; i<m-1 && pre; i++){
            pre = pre->next;
        }
        if(!pre) return head;
        auto cur = pre;
        for(int i=0; i<n && cur; i++){
            cur = cur->next;
        }
        pre->next = cur ? cur->next : NULL;
        pre= pre->next;
    }
    return head;
}
int main() {
    List ll;
    // build a simple list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> NULL
    for (int i = 1; i <= 9; i++) {
        ll.push_back(i);
    }
    cout << "Original list: ";
    ll.printList();
    int m = 2;  // keep 2 nodes
    int n = 3;  // delete next 3 nodes
    ll.head = deleteNodes(ll.head, m, n);
    cout << "After deleteNodes(m = 2, n = 3): ";
    ll.printList();
    return 0;
}
