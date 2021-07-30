//Question : Find the middle element of the linkedlist 
// Question link: https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1#

int getMiddle(Node *head)
{
   // Your code here
   Node* slow=head;
   Node* fast = head;
   while(fast && fast->next)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
   return slow->data;
}
