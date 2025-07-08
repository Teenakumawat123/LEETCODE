class Solution {
public:
    int maxD=0;
    int levels(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    int helper(TreeNode* root){
        if(root==NULL) return 0;
        int D= levels(root->left)+levels(root->right);
        maxD=max(maxD,D);
        helper(root->left);
        helper(root->right);
        return maxD;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    maxD=0;
    return helper(root); 
    }
};