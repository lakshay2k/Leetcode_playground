//Question is to print the linkedlist having check if list is empty or not
// Question link: https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1

class Solution
{
    public:
    void display(Node *head)
    {
      if(head==NULL)
      return;
      while(head!=NULL)
      {
          cout<<head->data<<" ";
          head=head->next;
      }
    }
};
