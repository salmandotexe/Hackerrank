/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *n=new Node();
    n->data=data;
    n->next=NULL;
    if(head==NULL)
    {
        return n; //returns pointer to type Node
    }
    Node *ptr=head;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=n;
    return head;
    
    
}
