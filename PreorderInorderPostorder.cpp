/* 
      Node is defined as  

      struct node
      {
          int data;
          node* left;
          node* right;
      };
      
*/

void preOrder(node *root) {
    node *ptr=root;
    cout << ptr->data << " ";
    
    if(ptr->left!=NULL)
        preOrder(ptr->left);
    if(ptr->right!=NULL)
        preOrder(ptr->right);
}
