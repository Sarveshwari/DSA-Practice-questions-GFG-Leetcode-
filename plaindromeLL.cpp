#Approach-1

#include<vector>
class Solution{
    
    private: 

    bool checkpalindrome(vector<int>arr)
    {
        int n=arr.size();
        int s=0;
        int l=n-1;
        
        while(s<=l)
        {
            if(arr[s] != arr[l])
            {
                return false;
            }
            s++;
            l--;
        }
        
        return true;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       vector<int>ans;
       
       Node* temp=head;
       
       while(temp!=NULL)
       {
           ans.push_back(temp->data);
           temp=temp->next;
           
       }
       
       return checkpalindrome(ans);
        
    }
};

#Approach-2

class Solution{
    
    private: 
    
   Node* getmid(Node* head)
   {
       Node* slow=head;
       Node* fast=head->next;
       
       while(fast!=NULL && fast->next !=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           
       }
       
       return slow;
   }
   
   Node* reverse(Node* head)
   {
       Node* prev=NULL;
       Node* curr=head;
       Node* forward=NULL;
       
       while(curr!=NULL)
       {
           
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
           
       }
       
       return prev;
   }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next==NULL)
        {
            return true;
        }
        
        Node* middle=getmid(head);
        
        Node* temp=middle->next;
        middle->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=middle->next;
        
        while(head2!=NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            
            head1=head1->next;
            head2=head2->next;
            
        }
        
        return true;
        
    }
};
