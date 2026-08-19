class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {

        map<int, vector<int>> mp;

        // for (int i = 1; i <= n; i++) {
        //     mp[i] = vector<int>(10, 0);
        // }

        for (int i = 0; i < rs.size(); i++) {
            int r = rs[i][0];
            int c = rs[i][1];  
            if(mp.find(r)==mp.end()) mp[r]=vector<int>(10,0);
            mp[r][c - 1] = 1;
        }

        int ans = 0;

        for (auto &x : mp) {

            vector<int> &v = x.second;

            bool left = (v[1] == 0 && v[2] == 0 &&
                         v[3] == 0 && v[4] == 0);

            bool middle = (v[3] == 0 && v[4] == 0 &&
                           v[5] == 0 && v[6] == 0);

            bool right = (v[5] == 0 && v[6] == 0 &&
                          v[7] == 0 && v[8] == 0);

            if (left && right)
                ans += 2;
            else if(left || middle || right) ans+=1;
        }

        // completely empty rows were not inserted in mp
        ans += (n - mp.size()) * 2;//nice observation

        return ans;
    }
};