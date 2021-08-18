// Question link added: https://practice.geeksforgeeks.org/problems/find-length-of-loop/1


int countNodesinLoop(struct Node *head)
{
    // Code here
    //initialising counter and two pointer to detect the loop first
    int count=0;
    Node* fast = head->next;
    Node* slow = head;
    
    //detecting the loop, if it terminates means we have got the loop
    while(fast!=slow && (fast!=NULL && fast->next!=NULL))
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    //checking that it terminates because of getting loop
    if(fast!=NULL && fast->next!=NULL)
    {
    slow=slow->next;
    count=count+1;
        
        //iterating to count the length of loop
    while(slow!=fast)
    {
        count=count+1;
        slow=slow->next;
    }
    return count;
    }
    //if it terminates of end of linkedlist means no cycle so return 0
    else
    {
        return 0;
    }
}
