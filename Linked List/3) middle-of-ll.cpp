#include<bits/stdc++.h>
using namespace std;

//leet  code = 876

ListNode* approach(LinkNode* head){
    int size = 0; 
    ListNode* curr = head;
    while(curr != NULL){
        size++;
        curr = curr->next

    }
    curr = head;
    for(int i=0; i<size/2; i++){
        curr = currr->next;
    }
    return curr;
}
ListNode* middleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}