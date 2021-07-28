// Question :Create a GetNth for taking the value at a given index of a linkedlist
//Question link: https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1


int GetNth(struct node* head, int index){
  // Assuming that Linkedlist is 1-indexed
  

  if(index==1)
  return head->data;
  while(index!=1)
  {
      head=head->next;
      index--;
  }
  return head->data;
}
