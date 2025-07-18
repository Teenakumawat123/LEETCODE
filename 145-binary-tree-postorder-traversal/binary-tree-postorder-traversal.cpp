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
    // void solve(TreeNode* root,vector<int>&ans){
    //     if(root==NULL) return;
    //     solve(root->left,ans);
    //     solve(root->right,ans);
    //     ans.push_back(root->val);
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        stack<TreeNode*>st;
        st.push(root);
        vector<int>ans;
        while(!st.empty()){
            TreeNode* t=st.top();
            st.pop();
            ans.push_back(t->val);
            if(t->left) st.push(t->left);
            if(t->right) st.push(t->right);
        }
        reverse(ans.begin(),ans.end());
        //solve(root,ans);
        return ans;
    }
};