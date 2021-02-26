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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* new_head=NULL;
        ListNode* sorting_ptr=NULL;
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        if(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                sorting_ptr=l1;
                l1=sorting_ptr->next;
            }
            else
            {
                sorting_ptr=l2;
                l2=sorting_ptr->next;
            }
            new_head=sorting_ptr;
        }
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                sorting_ptr->next = l1;
                sorting_ptr=l1;
                l1=sorting_ptr->next;
            }
            else
            {
                sorting_ptr->next=l2;
                sorting_ptr=l2;
                l2=sorting_ptr->next;
            }
        }
        if(l1==NULL)
        {
            sorting_ptr->next=l2;
        }
        else if(l2==NULL)
        {
            sorting_ptr->next=l1;
        }
        return new_head;
    }
};