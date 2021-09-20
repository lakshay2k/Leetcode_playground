// Question link: https://practice.geeksforgeeks.org/problems/preorder-traversal/1



Class Solution
{
public:
      vector<int> res; //global vector to store the pattern of traversal
      
vector <int> preorder(Node* root)
{
    //vector<int> res;
  // Your code here
  //if root does not point to NULL then only we will proceed.
  if(root!=NULL)
  {
  
  //Preorder : Root-> LeftNode -> RightNode
  res.push_back(root->data);
  //cout<<root->data;
  preorder(root->left);  //left subtree
  preorder(root->right); //right subtree
  return res;
  
  }
  return res;
}
}
