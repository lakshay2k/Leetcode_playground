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
        
        //counting total number of nodes in linked list - length of linkedlist
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        
        //if length of node is n the it is the head which is to be deleted
        if(len==n)
        {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
            
        //iterating to that list
        temp=head;
        for(i=1;i<(len-n);i++)
        {
            temp=temp->next;
        }
        
        //will make the pointers pointed to the next of node to be deleted
        ListNode* to_delete=temp->next;
        temp->next=temp->next->next;
        delete to_delete;
        return head;
        
    }
};
