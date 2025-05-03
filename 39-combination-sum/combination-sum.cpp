class Solution {
public:
void combination(vector<int> &candidates, vector<int> ans,vector<vector<int>>&finalans, int target, int idx)
{
    if (target == 0)
    {
        finalans.push_back(ans);
        return ;
    }
    if (target < 0)
        return;
    for (int i = idx; i < candidates.size(); i++)
    {
        ans.push_back(candidates[i]);
        combination(candidates, ans,finalans, target - candidates[i], i);
        ans.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>finalans;
        vector<int>ans;
        combination(candidates,ans,finalans,target,0);
        return finalans;
    }
};