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


void inOrder(node *root) {
    if(root->left!=NULL)
        inOrder(root->left);
    cout << root->data << " ";
    if(root->right!=NULL)
        inOrder(root->right);
}


void postOrder(node *root) {
    if(root->left!=NULL)
        postOrder(root->left);
    if(root->right!=NULL)
        postOrder(root->right);
    cout << root->data<< " ";
}
