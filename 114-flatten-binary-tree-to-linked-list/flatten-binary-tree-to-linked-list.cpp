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
       TreeNode*curr=root;
       while(curr){
        if(curr->left){
            TreeNode*r=curr->right;
            curr->right=curr->left;
            TreeNode*pred=curr->left;
            while(pred->right) pred=pred->right;
            pred->right=r;
            curr=curr->left;
        }
        else curr=curr->right;
       }
       TreeNode*t=root;
       while(t->right){
        t->left=NULL;
        t=t->right;
       }
    }
};