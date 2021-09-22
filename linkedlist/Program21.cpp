// Question link: https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
        //store the data of next node in node to be deleted
       del->data = del->next->data;
        //point the next of curr(node to be deleted) to next of next of it.
       del->next=del->next->next;
    }

};
