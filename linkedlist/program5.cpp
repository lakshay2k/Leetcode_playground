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
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        else if(head->next == NULL) return true;
        else if(head->next->next == NULL) 
        {
            if(head->val==head->next->val) return true;
            else return false;
        }            
        
        //find midpoint
        ListNode* fast = head;
        ListNode* slow = head;        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }        
        
        //even or odd
        bool even = false;
        if(fast==NULL) even = true;     
            
        //reverse before midpoint
        ListNode* curr = head;
        ListNode* next = NULL; 
        ListNode* prev = NULL;       
        while(curr!=NULL)
        {   
            next = curr->next;
            curr->next = prev;     
            if(next==slow) break;
            prev = curr;         
            curr = next;
        }   
        
        //now check if its palindrome       
        if(!even) slow = slow->next;
        while(slow&&curr)
        {   
            if(curr->val!=slow->val) return false;
            curr = curr->next;            
            slow = slow->next;
        }        
        
        return true;        
    }
};