Node* deleteK(Node *head,int K)
{
  //Your code here
  //checking two conditions that if the list is empty
  //or we have remove every next element which means to delete whole list
  if(head == NULL || K == 1)
  return NULL;
  else
  {
      //iterate over the whole linkedlist
      Node *temp = head;
      while(temp!=NULL)  // till we don't encounter NULL
      {
          int n = K;
        //iterating till K nodes
          while(n!=1 && temp!=NULL)
          {
              n = n-1;
            //as k nodes completes, we simplte points the next pointers to its precedor and free that node
              if(n==1)
              {
                  Node *todelete = temp->next;
                  if(todelete!=NULL)
                  {
                  temp->next = todelete->next;
                  free(todelete);
                  }
              }
            //for keep moving forward
              temp = temp->next;
          }
      }
      return head;
  }
