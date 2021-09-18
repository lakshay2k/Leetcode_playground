// Question link: https://practice.geeksforgeeks.org/problems/level-order-traversal/1


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> res;
      if(node == NULL)
      return res;
      
        //we will be using queue to store the children of already discovered node
      queue<Node *> q;
      q.push(node);
        
        //iterate till the queue is not empty
      while(q.empty() == false)
      {
          Node* temp=q.front();
          //cout<<temp->data;
          
          res.push_back(temp->data);
          q.pop();
          
          //after each dequeue from queue, we enqueue the children of node removed.
          //after checking if left or right child is present, then we enqueue it.
          if(temp->left !=NULL)
          q.push(temp->left);
          
          if(temp->right != NULL)
          q.push(temp->right);
          
      }
      return res;
    }
};
