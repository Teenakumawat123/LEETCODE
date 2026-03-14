class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ch(256, 0);
        int i = 0, j = 0;
        int max_len = 0;

        while (j < s.size()) {

            while (ch[s[j]] == 1) {
                ch[s[i]] = 0;
                i++;
            }

            ch[s[j]] = 1;
            max_len = max(max_len, j - i + 1);
            j++;
        }

        return max_len;
    }
};