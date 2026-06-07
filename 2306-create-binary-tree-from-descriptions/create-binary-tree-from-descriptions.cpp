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
    TreeNode* createBinaryTree(vector<vector<int>>&v) {
        //present 
        //not present
        unordered_map<int,TreeNode*>mp;
        unordered_map<int,bool>mp2;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(mp.find(v[i][0])==mp.end()){ //parent not present

               TreeNode* a=new TreeNode(v[i][0]);
               if(mp.find(v[i][1])==mp.end()){ //child not present
                TreeNode* b=new TreeNode(v[i][1]);
                mp[v[i][1]]=b;
                 if(v[i][2]==1){ // left child
                    a->left=b;
                 }
                 else{    // right child
                    a->right=b;
                 }
               }
               else{ //child present
                   if(v[i][2]==1){
                    a->left=mp[v[i][1]];
                   }
                   else{
                    a->right=mp[v[i][1]];
                   }
               } 
               mp[v[i][0]]=a;
               if(mp2.find(v[i][0])==mp2.end()) mp2[v[i][0]]=0;
               mp2[v[i][1]]=1;
            }
            else{ // parent node present

             TreeNode*c=mp[v[i][0]];
            if(mp.find(v[i][1])==mp.end()){ //child not prresent
            TreeNode*d=new TreeNode(v[i][1]);
                mp[v[i][1]]=d;
                if(v[i][2]==1){ //left child
                     c->left=d;
                }
                else{
                    c->right=d;
                }
            }
            else{ //child present
               if(v[i][2]==1){ //left child
                  c->left=mp[v[i][1]];
               }
               else{
                c->right=mp[v[i][1]];
               }
            }
              mp[v[i][0]]=c;
              if(mp2.find(v[i][0])==mp2.end()) mp2[v[i][0]]=0;
               mp2[v[i][1]]=1;
            }
        }
       TreeNode* ans=NULL;
        for(auto x:mp2){
            if(x.second==0){
                ans=mp[x.first];
            }
        }
        return ans;
    }
};