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
    void flatten(TreeNode* root) {
       if(root==NULL) return;
       TreeNode*l=root->left;
       TreeNode*r=root->right;
       root->left=NULL;
       root->right=NULL;
       flatten(l);
       flatten(r);
       root->right=l;
       TreeNode*t=root;
       while(t->right!=NULL) t=t->right;
       t->right=r;
    }
};