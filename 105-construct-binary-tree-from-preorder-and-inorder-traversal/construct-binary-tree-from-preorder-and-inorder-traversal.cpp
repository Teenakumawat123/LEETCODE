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
    TreeNode* construct(vector<int>& pre,int pl,int ph, vector<int>& in ,int il,int ih){
        if(pl>ph) return NULL;
        TreeNode*root=new TreeNode(pre[pl]);
         if(pl==ph) return root;
        int i=il;
        while(i<=ih){
            if(in[i]==pre[pl]) break;
            i++;
        }
        int lc=i-il;
        int rc=ih-i;
        root->left=construct(pre, pl+1, pl+lc, in, il, i-1);
        root->right=construct(pre, pl+lc+1, ph, in, i+1, ih);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=pre.size();
        return construct(pre,0,n-1,in,0,n-1);
    }
};