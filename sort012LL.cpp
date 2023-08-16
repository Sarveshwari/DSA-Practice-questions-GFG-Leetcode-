/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
void insertAtTail(Node* &tail, Node* curr)
{
    tail->next=curr;
    tail=curr;
}


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zerohead=new Node(-1);
        Node* zerotail=zerohead;
        Node* onehead=new Node(-1);
        Node* onetail=onehead;
        Node* twohead=new Node(-1);
        Node* twotail=twohead;
        
        Node* curr=head;
        
        //Fill all three linekd lists
        
        while(curr!=NULL)
        {
            
            int value=curr->data;
            
            
            if(value == 0)
            {
                insertAtTail(zerotail, curr);
            }
            else if(value == 1)
            {
                insertAtTail(onetail, curr);
            }
            else if(value==2){
                insertAtTail(twotail, curr);
            }
            
            curr=curr->next;
        }
        
        //merge all three linked list
        
        
        
        
            if(onehead->next!=NULL)
            {
                zerotail->next=onehead->next;
            }
            else
            {
                
                zerotail->next=twohead->next;
            }
            
            onetail->next=twohead->next;
            twotail->next=NULL;
            
            head=zerohead->next;
            
            delete zerohead;
            delete onehead;
            delete twohead;
        
        
        return head;
        
        
    }
};
