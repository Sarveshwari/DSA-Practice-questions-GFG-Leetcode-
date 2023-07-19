//First approach

int getlen(Node* &head)
{
    Node* temp=head;
    int cnt=0;
    
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    
    return cnt;
}

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    
    int getMiddle(Node *head)
    {
        // Your code here
        int i=0;
        
        if(head==NULL)
        return -1;
        
        Node* temp=head;
        
        int len=getlen(head);
        int N=len/2;
        
        
        while(i<N)
        {
            temp= temp->next;
            i++;
        }
        
        return temp->data;
   
    }
};

//Optimised Approach

Node* getmiddle(Node* &head)
{
    if(head==NULL)
    return NULL;
    
    Node* fast=head->next;
    Node* slow=head;
    
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        
        slow=slow->next;
    }
    
    return slow;
}

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    
    int getMiddle(Node *head)
    {
        Node* temp=getmiddle(head);
        
        if(temp==NULL)
        {
            return -1;
        }
    
            return temp->data;
    }
};
