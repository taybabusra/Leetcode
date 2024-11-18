class Solution {
public:
    int getLength(ListNode* head)
    {
        int cnt=0;
        while(head!=NULL)
        {
            head=head->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        int len=getLength(head);
        ListNode* curr=head;
        for(int i=0;i<len/2-1;i++)
        {
            curr=curr->next;
        }
        ListNode* next=curr->next;
        ListNode* next_next=next->next;
        curr->next=next_next;
        next->next=NULL;
        delete next;
        return head;
    }
};
