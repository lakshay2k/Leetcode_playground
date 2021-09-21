// Question link: https://practice.geeksforgeeks.org/problems/postorder-traversal/1


Class Solution
{
//global vector to store the traversal 
vector<int> res;

vector <int> postOrder(Node* root)
{
  // Your code here
  //if tree is empty then just return
  if(root == NULL)
  return res;
  
  //cout<<root->data;
  //PostOrder : leftNode->RightNode->Root
  postOrder(root->left);
  postOrder(root->right);
  res.push_back(root->data);
  
  return res;
}
}
