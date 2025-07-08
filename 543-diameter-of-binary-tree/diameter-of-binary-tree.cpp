class Solution {
public:
    int maxD=0;
    int levels(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void helper(TreeNode* root,int &maxD){
        if(root==NULL) return;
        int D= levels(root->left)+levels(root->right);
        maxD=max(maxD,D);
        helper(root->left,maxD);
        helper(root->right,maxD);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxD=0;
        helper(root,maxD);
        return maxD; 
    }
};