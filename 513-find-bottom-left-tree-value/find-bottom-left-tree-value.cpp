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
    void bottom(TreeNode* root,vector<int>&ans,int level,int curr){
        if(root==NULL) return;
        if(curr==level){
           ans.push_back(root->val);
        }
       bottom(root->left,ans,level,curr+1);
       bottom(root->right,ans,level,curr+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int n=levels(root);
        vector<int>ans;
        bottom(root,ans,n,1);
        return ans[0];
    }
};