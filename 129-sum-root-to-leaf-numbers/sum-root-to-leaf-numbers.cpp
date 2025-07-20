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
void solve(TreeNode* root,string s,vector<string>&v){
    if(root==NULL) return;
    string a=to_string(root->val);
    if(root->left==NULL && root->right==NULL) {
        s+=a;
        v.push_back(s);
        return;
    }
   solve(root->left,s+a,v);
   solve(root->right,s+a,v);
}
    int sumNumbers(TreeNode* root) {
        vector<string>v;
        solve(root,"",v);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=stoi(v[i]);
        }
        return sum;
    }
};