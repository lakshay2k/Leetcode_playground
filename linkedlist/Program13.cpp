// Question is to count the number of nodes in a linkedlist
// Question link : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int count=0;
        if(head==NULL)
        return 0;
        while(head!=NULL)
        {
            count=count+1;
            head=head->next;
        }
        return count;
    
    }
};
