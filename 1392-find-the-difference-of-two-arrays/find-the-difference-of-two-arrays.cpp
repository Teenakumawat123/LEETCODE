class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v(2);
        set<int>s1;
        set<int>s2;
        for(int x:nums1){
            s1.insert(x);
        }
        for(int x:nums2){
            s2.insert(x);
        }
        for(int p:s1){
            if(s2.find(p)==s2.end()) v[0].push_back(p);
        }
         for(int p:s2){
            if(s1.find(p)==s1.end()) v[1].push_back(p);
        }
        return v;
    }
};