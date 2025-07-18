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
//   void solve(TreeNode* root,vector<int>&ans){
//     if(root==NULL) return;
//     ans.push_back(root->val);
//     solve(root->left,ans);
//     solve(root->right,ans);
//   }
    vector<int> preorderTraversal(TreeNode* root) {
       //iterative approach
       stack<TreeNode*>st;
        vector<int>ans;
        if(root==NULL) return {};
        st.push(root);
        while(!st.empty()){
            TreeNode*t=st.top();
            st.pop();
            ans.push_back(t->val);
            if(t->right) st.push(t->right);
            if(t->left) st.push(t->left);
        }
        // solve(root,ans);
        return ans;
    }
};