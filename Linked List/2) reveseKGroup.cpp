#include<bits/stdc++.h>
using namespace std;

ListNode* reverseKGropu(ListNode* head, int n){
    ListNode* curr = head;
    for(int i=0; i<k; i++){
        if(curr == k)
        return head;
        curr = curr->next;
    }
    curr = head;
    ListNode* prev = NULL;
    int count = 0; 
    while(count < k){
        ListNode* save = curr-next;
        curr->next = prev;
        prev = curr;
        curr = save;
        count++;
    }
    head->next = reveseKGruop(curr, k);
    return prev;
}

//TC: O(n)
//leetcode 28