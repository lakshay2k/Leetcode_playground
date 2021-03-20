class Solution {
public:
    //This the function to reverse a linked list
    ListNode* reverseList(ListNode* head) {
        // i have used a three pointer approach in it
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //we will add values and store the carry if any
        int rem,carry=0;
        ListNode* res = NULL; // pointer that increases as the value is added to new linkedlist
        while(l1!=NULL || l2!=NULL)
        {
            //everytime add is zero to sum two new numbers
            int add = 0;
            //idea is to add only the list values which is present
            //as it may happen that two list are not of same length
            if(l1)
            {
                add = add + l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                add = add + l2->val;
                l2=l2->next;
            }
            //initally carry is zero
            add = add + carry;
            carry = add/10;//carry will be tenth's place number which is extracteed using division
            rem = add % 10;  
            //if there is carry, add the remainder or else add the addition
            if(carry != 0)
            {
                ListNode* new_node = new ListNode(rem);
                new_node->next = res;
                res=new_node;
            }
            else
            {
                ListNode* new_node = new  ListNode(add);
                new_node->next = res;
                res=new_node;
            }
        }
        
        // we may face situation having carry at last stages when both list tends to null then carry is added
        if((l1==NULL || l2==NULL) && carry == 1)
        {
            ListNode* new_node = new ListNode(carry);
            new_node->next = res;
            res=new_node;
        }
        //we are return a reverse list because then pointer res is pointing to last node so to make iti used reverse
        return reverseList(res);
    }
};
