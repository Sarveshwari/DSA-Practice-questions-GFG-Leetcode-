//Check if BST or no

int func(Node*root, Node* &prev){
        if(root){
            if(!(func(root->left, prev)))
            return false;
            
            if(prev!=NULL && root->data <= prev->data)
            return false;
            
            prev=root;
            
            return func(root->right, prev);
        }
        
        
        
    }
    bool isBST(Node* root) 
    {
        Node* prev=NULL;
      
        return func(root, prev);
    }
