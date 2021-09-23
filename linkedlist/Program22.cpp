// Question link: https://practice.geeksforgeeks.org/problems/reorder-list/1


void reorderList(Node* head) {
    // Your code here
    Node* Left = head;
    Node* temp=NULL;
    Node* end= NULL;
    Node* right = head;
    
    //traversing till last pointer
    while(right->next!=NULL)
    {
        end = right;
        right=right->next;
    }
    
    //iterating and connecting the left link to right one by one
    while(left<right)
    {
        temp = left->next;
        left->next = right;
        end->next = NULL;
        right->next=temp;
        left = temp;
        right=end;
    }
    
}
