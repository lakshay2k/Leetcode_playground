int GetNth(struct node* head, int index){
  // Code here
  if(index==1)
  return head->data;
  while(index!=1)
  {
      head=head->next;
      index--;
  }
  return head->data;
}
