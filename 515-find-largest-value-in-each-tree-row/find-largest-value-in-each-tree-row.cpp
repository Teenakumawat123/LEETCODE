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
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nthlevel(TreeNode*root,int curr,int level,vector<int>&v){
        if (root == NULL) return;
        if (curr == level) v.push_back(root->val);
        nthlevel(root->left, curr + 1, level, v);
        nthlevel(root->right, curr + 1, level, v);
    }
    void levelorder(TreeNode* root,vector<int>&ans){
        int n=levels(root);
        // vector<int>v;
        ans.push_back(root->val);
        for(int i=2;i<=n;i++){
            vector<int>v;
            nthlevel(root,1,i,v);
          int maxi=INT_MIN;
          for(int j=0;j<v.size();j++){
            maxi=max(maxi,v[j]);
          }
           ans.push_back(maxi);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        vector<int>ans;
        levelorder(root,ans);
        return ans;
    }
};