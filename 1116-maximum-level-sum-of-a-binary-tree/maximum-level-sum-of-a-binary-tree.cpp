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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(q.size()>0){
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(sum);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        int maxi=ans[0];
        int idx=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i]>maxi){
                maxi=ans[i];
                idx=i;
            }
        }
        return idx+1;
    }
};