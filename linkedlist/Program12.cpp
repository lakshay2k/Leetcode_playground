//Question is to print the linkedlist having check if list is empty or not
// Question link: https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1

class Solution
{
    public:
    void display(Node *head)
    {
        //when the linkedlist is empty return
      if(head==NULL)
      return;
        
      //keep iterating till the last(points to null) and print the data with a space
      while(head!=NULL)
      {
          cout<<head->data<<" ";
          head=head->next;
      }
    }
};
