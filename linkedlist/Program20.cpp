// Question link: https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1


class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        struct Node *curr = head;
        struct Node *t;
        
        //iterate till we reach the last node
        while(curr)
        {
            //count the m nodes
            for(int count = 1;count<M &&curr!=NULL;count++)
            {
                curr=curr->next;
            }
            //if after counting m nodes, we reach the last node then just return
            if(curr == NULL)
            return;
            
            //from the next node, we start to delete the N nodes
            t = curr->next;
            
            //deleting N nodes
            for(int count = 1;count<=N && t!=NULL;count++)
            {
                struct Node *temp = t;
                t=t->next;
                free(temp);
            }
            
            //connecting the links after deleting N nodes
            curr->next = t;
            
            //to return the curr pointer.
            curr = t;
        }
        
    }
};
