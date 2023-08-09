

//essentially finding height of the B-Tree

//can use any of the two that are recursive or levelorder traversal

class Solution{
public:
    int maxDepth(TreeNode* root){
        if(root == NULL)
        return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1+max(lh,rh);
    }

};


