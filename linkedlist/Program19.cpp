Node* deleteK(Node *head,int K)
{
  //Your code here
  //checking two conditions that if the list is empty
  //or we have remove every next element which means to delete whole list
  if(head == NULL || K == 1)
  return NULL;
  else
  {
      
      Node *temp = head;
      while(temp!=NULL)
      {
          int n = K;
          while(n!=1 && temp!=NULL)
          {
              n = n-1;
              if(n==1)
              {
                  Node *todelete = temp->next;
                  if(todelete!=NULL)
                  {
                  temp->next = todelete->next;
                  free(todelete);
                  }
              }
              temp = temp->next;
          }
      }
      return head;
  }
