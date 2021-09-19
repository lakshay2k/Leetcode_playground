// https://practice.geeksforgeeks.org/problems/inorder-traversal/1



class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
  
    vector<int> res; //creating global vector
    vector<int> inOrder(Node* root) {
        // Your code here
      //base condition that when root points to null, just return back
        if(root == NULL)
        return res;
      
      //Inorder traversal is LeftNode -> Root -> RightNode
        inOrder(root->left);
        res.push_back(root->data); //for root node, we push the data to vector
        inOrder(root->right);
      
        return res;
    }
};
