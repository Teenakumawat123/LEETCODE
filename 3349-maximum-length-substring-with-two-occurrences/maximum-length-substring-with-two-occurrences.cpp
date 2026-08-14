class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0;
        int j = 0;
        unordered_map<int,int>m;
        int n = s.size();
        int ans = 0;
        while(j<n){
            m[s[j]]++;
            while(m[s[j]]>2){
                m[s[i]]--;
                i++;
            }
            j++;
            ans = max(ans,j-i);
        }
        return ans;
    }
};