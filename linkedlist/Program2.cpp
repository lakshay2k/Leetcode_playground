/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0,i;
        struct ListNode* temp=head;
        
        //counting total number of nodes in linked list
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        if(len==n)
        {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
            
            
        temp=head;
        for(i=1;i<(len-n);i++)
        {
            temp=temp->next;
        }
        ListNode* to_delete=temp->next;
        temp->next=temp->next->next;
        delete to_delete;
        return head;
        
    }
};
