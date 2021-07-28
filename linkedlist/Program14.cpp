// Question :Create a GetNth for taking the value at a given index of a linkedlist
//Question link: https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1


int GetNth(struct node* head, int index){
  // Assuming that Linkedlist is 1-indexed
  
  // If index is 1(first node) then return the head node
  if(index==1)
  return head->data;
  
  // we will iterate over the linkedlist by keep decreamenting the index until index become less than length
  while(index!=1)
  {
      head=head->next;
      index--;
  }
  
  //means we are at desired index, return data of that node
  return head->data;
}
