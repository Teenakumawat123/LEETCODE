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
    void inOrder(TreeNode*root,vector<int>&in){
        if(root==NULL) return;
        inOrder(root->left,in);
        in.push_back(root->val);
        inOrder(root->right,in);
    }
    TreeNode* solve( vector<int>&in,int lo,int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode*root=new TreeNode(in[mid]);
        root->left=solve(in,lo,mid-1);
        root->right=solve(in,mid+1,hi);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>in;
        inOrder(root,in);
        int n=in.size();
        return solve(in,0,n-1);
    }
};