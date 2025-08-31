class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>s;
        for(int x:friends){
            s.insert(x);
        }
        vector<int>ans;
        for(int p:order){
            if(s.find(p)!=s.end()) ans.push_back(p);
        }
        return ans;
    }
};