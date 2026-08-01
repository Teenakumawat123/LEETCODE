class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        s = '1'+s+'1';
        vector<vector<int>> arr;
        vector<int> pref(s.size());
        bool start = false;
        int a,b;
        for (int i=0;i<s.size();i++){
            pref[i] = s[i]-'0';
            if (i>0) pref[i] += pref[i-1];

            if (start && i > 0 && s[i-1] == '0' && s[i] == '1'){
                arr.push_back({a,i});
            }
            if (s[i] == '1'){
                start = true;
                a = i;
            }
        }
        int ans = 0;
        int l = arr.size();
        for (int i=0;i<l;i++){
            if (i+1 < l){
                int L = arr[i][0];
                int R = arr[i+1][1];
                int ones = pref[R]-(L ? pref[L-1] : 0);
                int zeros = (R-L+1)-ones;
                ans = max(ans,zeros);
            }
        }
        return ans+pref[s.size()-1]-2;
    }
};