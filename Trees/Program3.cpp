// https://practice.geeksforgeeks.org/problems/inorder-traversal/1



class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> res;
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root == NULL)
        return res;
        inOrder(root->left);
        res.push_back(root->data);
        inOrder(root->right);
        return res;
    }
};
