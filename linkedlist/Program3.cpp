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
    ListNode* reverseList(ListNode* head) {
       ListNode *prevnode=NULL, *currnode=head, *nextnode=head;
        while(nextnode!=NULL)
        {
            nextnode=nextnode->next;
            currnode->next=prevnode;
            prevnode=currnode;
            currnode=nextnode;
        }
        head=prevnode;
        return head;
    }
};
