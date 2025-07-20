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
void solve(TreeNode* root,string s,int &sum){
    if(root==NULL) return;
    string a=to_string(root->val);
    if(root->left==NULL && root->right==NULL) {
        s+=a;
        sum+=stoi(s);
        return;
    }
   solve(root->left,s+a,sum);
   solve(root->right,s+a,sum);
}
    int sumNumbers(TreeNode* root) {
        //vector<string>v;
        int sum=0;
        solve(root,"",sum);
        return sum;
    }
};