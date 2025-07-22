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
    long long maxInleft(TreeNode *root){
    if (root == NULL)
        return LLONG_MIN;
    long long lmax = maxInleft(root->left);
    long long rmax = maxInleft(root->right);
    return max((long long)(root->val), max(lmax, rmax));
    }
    long long minInright(TreeNode *root){
    if (root == NULL)
        return LLONG_MAX;
    long long lmax = minInright(root->left);
    long long rmax = minInright(root->right);
    return min((long long)(root->val), min(lmax, rmax));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        else if((long long)(root->val)<=maxInleft(root->left)) return false;
        else if((long long)(root->val)>=minInright(root->right)) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};