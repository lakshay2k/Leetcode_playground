class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //Creating node for storing intersection node pointer
        ListNode* ans = NULL;
        //Making all the values negative connected by a
       for(ListNode* a = headA;a!=NULL;a=a->next)
       {
           a->val = -(a->val);
       }
        //chosing first values that comes negative as it is the only intersection
        for(ListNode* b = headB;b!=NULL;b=b->next)
        {
            if(b->val < 0)
            {
                //ans becomes first negative node
                ans=b;
                break;
            }
        }
        
        //redefining the values as positive and returning the ans pointer.
        for(ListNode* a = headA;a!=NULL;a=a->next)
       {
           a->val = -(a->val);
       }
        return ans;
    }
};
