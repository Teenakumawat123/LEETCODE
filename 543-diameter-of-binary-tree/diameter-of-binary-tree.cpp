class Solution {
public:
    int maxD=0;
    int levels(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int D= levels(root->left)+levels(root->right);
        maxD=max(maxD,D);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxD;
    }
};