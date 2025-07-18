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
    //  if(root==NULL) return;
    //  solve(root->left,ans);
    //  ans.push_back(root->val);
    //  solve(root->right,ans);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* node=root;
        vector<int>ans;
        while(st.size()>0 || node){
            if(node){
                st.push(node);
                node=node->left;
            }
            else{  //node is at empty
               TreeNode*t=st.top();
               st.pop();
               ans.push_back(t->val);
               node=t->right;
            }
        }
        //solve(root,ans);
        return ans;
    }
};