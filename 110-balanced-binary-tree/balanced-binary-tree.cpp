/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int levels(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    bool solve(TreeNode* root){
        if(root==NULL) {return true;}
        int h=abs(levels(root->left)-levels(root->right));
        if(h>1) return false;
        bool left =solve(root->left);
        bool right=solve(root->right);
        return left && right;
    }
    bool isBalanced(TreeNode* root) {
        return solve(root);
    }
};