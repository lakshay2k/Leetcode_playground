Class Solution
{
vector<int> res;
vector <int> postOrder(Node* root)
{
  // Your code here
  if(root == NULL)
  return res;
  
  //cout<<root->data;
  postOrder(root->left);
  postOrder(root->right);
  res.push_back(root->data);
  return res;
}
}
