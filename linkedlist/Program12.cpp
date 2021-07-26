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
