class Solution {
    public: 
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){ 
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        
        for(auto x:mp){
            vector<int>v=x.second;
            bool f=true;
            if (v.size()>=3){
                 int s=abs(v[0]-v[1]);
                 for(int i=1;i<v.size()-1;i++){
                    if(abs(v[i]-v[i+1])!=s) {f=false; break;}
                 }
                 if(f) ans++;
             }
             //if(f) ans++;
        }
        return ans;
    }
};

