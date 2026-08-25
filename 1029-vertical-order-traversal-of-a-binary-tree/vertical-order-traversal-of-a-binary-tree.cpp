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
    map<int,map<int,vector<int>>>mp;
    
    void solve(TreeNode* root,int r,int c){
        if(root==NULL){
            return;
        }
        mp[c][r].push_back(root->val);
        solve(root->left,r+1,c-1);
        solve(root->right,r+1,c+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        vector<vector<int>>v;

        for(auto x:mp){
            vector<int>ans;
            for(auto p:x.second){
                sort(p.second.begin(),p.second.end());
                for(int z:p.second){
                    ans.push_back(z);
                }
            }
            v.push_back(ans);
        }
        return v;
    }
};