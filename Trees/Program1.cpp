// Question link: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1


class Solution{
    public:
    
    //Function to find the height of a binary tree.
    /*
    we will be using DFS - Depth First Search
    people might consider nodes from root node to leaf node
    Height of binary tree = number of edges from the root node to the leaf node.
    heighht of a x node = number of edges from x node to the leaf node.
    height of binary tree  = height of root node.
    */
    
    int height(struct Node* node){
        // code here 
        //base condition
        if(node == NULL)
        {
            return 0;
        }
        int leftheight = height(node->left);
        int rightheight = height(node->right);
        return max(leftheight,rightheight) + 1;
    }
};
