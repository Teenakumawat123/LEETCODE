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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        vector<long long>ans;
        q.push(root);
        while(q.size()>0){
            int n=q.size(); //size
            long long sum=0;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(sum);
        }
        sort(ans.rbegin(),ans.rend());
        if(k>ans.size()) return -1;
        return ans[k-1];
    }
};