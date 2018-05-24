#include <set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    set<Node*> s;
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        if(s.find(ptr)!=s.end())
            return 1;
        s.insert(ptr);
        if(ptr->next==NULL)
            return 0;
        
        ptr=ptr->next;
    }
    return 0;
}
