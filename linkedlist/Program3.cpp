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
        
        //We will be using three pointers to keep track of Previous, Current and Next node
       ListNode *prevnode=NULL, *currnode=head, *nextnode=head;
        
        //iterate till the next node becomes null
        while(nextnode!=NULL)
        {
            /*
            first we move the next node ahead 
            change the next of current node to prev (as we want to reverse the linkedlist)
            now the previous node becomes the current node
            */
            nextnode=nextnode->next;
            currnode->next=prevnode;
            prevnode=currnode;
            currnode=nextnode;
        }
        
        //Our head will the pointer where previous node is pointing
        head=prevnode;
        return head;
    }
};
