//height(left) - height(right) <=1
//The above is for every node


//Naive solution :

/*Bool check(Node)
    if node == nullptr  
        return true;

    lh = findHleft(node->left)
    rh = findHRight(node->right)
    if(abs(rh - lh) > 1) return false;

    //IF THE ABOVE CONDITION IS NOT FALSE,
    //WE CHECK THE SAME FOR OTHER NODES RECURSIVELY

    Bool left = check(node->left);
    Bool right = check(node->left);

    The below check if the left or right disobeys the 
    <=1 formula or not. if yes, then false; 
    if(!left || !right) return false;

    return true;

The above is a O(n^2) solution */ 


class Solution{
public: 
    bool isBalanced(TreeNode* root){
        return dsfHeight(root) != -1;
    }
    int dfsHeight (TreeNode *root){
        if(root == NULL) return 0;

        int leftHeight = dfsheight(root->left);
        if(leftHeight == -1) return -1;

        int rightHeight = dfsHeight(root ->right);
        if(rightHeight == -1) return -1;

        if(abs(leftHeight - rightHeight) > 1) return -1;
        return max(leftHeight, rightHeight) + 1;
    }

}