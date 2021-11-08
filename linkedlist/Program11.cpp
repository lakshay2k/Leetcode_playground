class Solution {
public:

    TreeNode* sortedListToBST(ListNode* head) {
        
        //if linkedlist is empty return null
        if(head == NULL)
            return NULL;
        
        //lets construct the tree
        return constructTree(head,NULL); 
    }
    
    TreeNode* constructTree(ListNode* head, ListNode* tail)
    {
        
        //if the head and tail matches, means the we have one single node only 
        if(head == tail)
            return NULL;
        
        //using fast and slow pointer approach to find the midpoint of linkedlist
        ListNode* slow = head;
        ListNode* fast = head;
        
        //iterate till the fast pointer reaches the end
        while(fast != tail && fast->next != tail)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //creating a new tree node with val of midpoint and then recursively calling left and right part of subtree.
        TreeNode* root = new TreeNode(slow->val);
        
        root->left = constructTree(head,slow);
        root->right = constructTree(slow->next,tail);
        
        //return the root which is of TreeNode type
        return root;
    }
};
