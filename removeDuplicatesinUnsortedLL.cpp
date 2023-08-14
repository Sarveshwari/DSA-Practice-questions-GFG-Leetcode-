class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     
     Node* temp=head;
     Node* prev=NULL;
     
     map <int, bool> visited;
     while(temp!=NULL)
     {
         if(visited[temp->data]==false)
         {
             prev=temp;
             visited[temp->data]++;
            temp=temp->next;
             
         }
         else
         {
             
             Node* nextnode=temp->next;
             prev->next=nextnode;
             delete(temp);
             temp=nextnode;
         }
         
     }
     
     return head;
     
     
    }
};
