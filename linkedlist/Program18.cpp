// Question link added: https://practice.geeksforgeeks.org/problems/find-length-of-loop/1




int countNodesinLoop(struct Node *head)
{
    // Code here
    int count=0;
    Node* fast = head->next;
    Node* slow = head;
    
    while(fast!=slow && (fast!=NULL && fast->next!=NULL))
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL && fast->next!=NULL)
    {
    slow=slow->next;
    count=count+1;
    while(slow!=fast)
    {
        count=count+1;
        slow=slow->next;
    }
    return count;
    }
    else
    {
        return 0;
    }
}
