void reorderList(Node* head) {
    // Your code here
    Node* Left = head;
    Node* temp=NULL;
    Node* end= NULL;
    Node* right = head;
    while(right->next!=NULL)
    {
        end = right;
        right=right->next;
    }
    
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
