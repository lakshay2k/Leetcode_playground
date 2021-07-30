//Question : Find the middle element of the linkedlist 
// Question link: https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1#


int getMiddle(Node *head)
{
   // Your code here
   
   //Using the tortoise-hare approach
   Node* slow=head; //tortoise
   Node* fast = head;  //hare
   while(fast && fast->next)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
   
   //return the data pointed by slow or hare
   return slow->data;
}
