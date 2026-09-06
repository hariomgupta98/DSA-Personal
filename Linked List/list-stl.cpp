#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout<<(*itr)<<"-> ";
    }
    cout<<"NULL\n";
}

int main(){
    list<int> ll;

    cout<<"push_front: ";
    ll.push_front(2);
    ll.push_front(1); //1->2
    printList(ll);

    cout<<"push_back: ";
    ll.push_back(3); //1->2->3
    ll.push_back(4); //1->2->3->4
    printList(ll);

    cout<<"\nSize = "<<ll.size()<<"\n";
    cout<<"head = "<<ll.front()<<"\n";
    cout<<"tail = "<<ll.back()<<"\n";

    cout<<"\npop_front: ";
    ll.pop_front();
    printList(ll);

    cout<<"pop_back: ";
    ll.pop_back();
    printList(ll);
    return 0;
}