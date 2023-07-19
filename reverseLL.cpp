//My solution

void InsertHead(ListNode *&head, int data)
{

    ListNode *temp = new ListNode(data);
    temp->next = head;
    head = temp;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

     
        ListNode* res=new ListNode();
        ListNode* head2 = NULL;

        while(head!=NULL){

            InsertHead(head2, head->val);
            head=head->next;
        }

        return head2;
       
    }
};
