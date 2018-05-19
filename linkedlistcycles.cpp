    /*  Solution to:  https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem */

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
