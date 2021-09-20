Class Solution
{
public:
      vector<int> res;
vector <int> preorder(Node* root)
{
    //vector<int> res;
  // Your code here
  if(root!=NULL)
  {
  res.push_back(root->data);
  //cout<<root->data;
  preorder(root->left);
  preorder(root->right);
  return res;
  }
  return res;
}
}
