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
    int levels(TreeNode *root){
    if (root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
    }
    void nthLevel(TreeNode *root, int i,vector<int>&ans){
    if (root == NULL) return;
    ans[i]=root->val;
    nthLevel(root->left,i+1,ans);
    nthLevel(root->right,i+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n=levels(root);
        vector<int>ans(n);
        nthLevel(root,0,ans);
        return ans;
    }
};