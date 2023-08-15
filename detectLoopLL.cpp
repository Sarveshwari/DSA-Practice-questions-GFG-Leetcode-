/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

    bool hasCycle(ListNode *head) {
         if(head==NULL)
    {
        return false;
    }

    map<ListNode*,bool> visited;

    ListNode* temp=head;

    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }

    return false;
      
    }

