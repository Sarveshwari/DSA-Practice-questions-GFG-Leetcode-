/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if (head==NULL)
        {
            return NULL;
        }
        
        node* prev=NULL;
        node* curr=head;
        node* next=NULL;
        int count =0;
        
        while( curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
            
        }
        
        if(next!=NULL)
        {
            head->next=reverse(next, k);
        }
        
        return prev;
    }
