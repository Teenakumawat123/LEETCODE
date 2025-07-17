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
    void traverse_L(TreeNode*root,vector<vector<int>>&ans,int idx){
        if(root==NULL) return;
        ans[idx].push_back(root->val);
        traverse_L(root->left,ans,idx+1);
        traverse_L(root->right,ans,idx+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=levels(root);
        vector<vector<int>>ans(n);
        traverse_L(root,ans,0);
        return ans;
    }
};