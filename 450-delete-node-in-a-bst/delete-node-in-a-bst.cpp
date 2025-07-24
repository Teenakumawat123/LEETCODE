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
    TreeNode* BST(vector<int>&v,int lo,int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode*root=new TreeNode(v[mid]);
        root->left=BST(v,lo,mid-1);
        root->right=BST(v,mid+1,hi);
        return root;
    }
    void solve(TreeNode* root,vector<int>&v, int key){
        if(root==NULL) return;
        solve(root->left,v,key);
        if(root->val!=key) v.push_back(root->val);
        solve(root->right,v,key);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>v;
        solve(root,v,key);
        return BST(v,0,v.size()-1);
    }
};