// Question is to count the number of nodes in a linkedlist
// Question link : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        
        //initialising the count variable
        int count=0;
        
        //if the linkedlist is null then length is zero (0)
        if(head==NULL)
        return 0;
        
        //Iterate to the end of linkedlist and keep counting the nodes
        while(head!=NULL)
        {
            count=count+1;
            head=head->next;
        }
        
        //return the length of linkedlist OR count
        return count;
    
    }
};
