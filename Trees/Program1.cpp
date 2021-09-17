// Question link: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1


class Solution{
    public:
    
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
