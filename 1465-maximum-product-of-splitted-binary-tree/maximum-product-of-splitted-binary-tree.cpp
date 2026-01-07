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
    long long total_sum=0;
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return root->val+sum(root->left)+sum(root->right);
    }
    int max_p(TreeNode* root,long long &t_sum,long long &maxi){
       if(root==NULL) return 0;
       long long left=max_p(root->left,t_sum,maxi);
       long long right=max_p(root->right,t_sum,maxi);
       int val=root->val+left+right;
       maxi=max(maxi,(t_sum-val)*val);
       return val;
    }
    int maxProduct(TreeNode* root) {
        total_sum=sum(root);
        long long maxi=0;
        max_p(root,total_sum,maxi);
        return maxi%1000000007;
    }
};