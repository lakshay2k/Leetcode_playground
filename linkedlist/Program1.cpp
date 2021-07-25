/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // we will store the value of node next to the deleted node
        //and will make the pointer of current node to next of deleted node
        node->val = node->next->val;
        node->next = node->next->next; 
    }
};
