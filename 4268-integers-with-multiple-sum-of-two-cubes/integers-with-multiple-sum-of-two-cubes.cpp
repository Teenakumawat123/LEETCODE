class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int> mp;
        vector<int> ans;
        
        int limit = cbrt(n);
        
        for(int i = 1; i <= limit; i++){
            for(int j = i; j <= limit; j++){  // avoid duplicates
                int x = i*i*i + j*j*j;
                if(x > n) break;
                mp[x]++;
            }
        }
        
        for(auto &p : mp){
            if(p.second >= 2) ans.push_back(p.first);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};