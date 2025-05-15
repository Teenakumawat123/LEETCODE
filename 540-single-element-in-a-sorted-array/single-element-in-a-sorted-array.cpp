class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int ele:nums){
            mp[ele]++;
        }
        int single_element;
        for(auto p:mp){
          if(p.second==1){
            single_element=p.first;
            break;
          }
        }
        return single_element;
    }
};