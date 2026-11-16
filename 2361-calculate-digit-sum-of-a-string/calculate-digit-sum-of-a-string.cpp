class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k) return s;
  while (s.length() > k) {

    string next = "";

    for (int i = 0; i < s.length(); i += k) {

        int sum = 0;

        for (int j = i; j < i + k && j < s.length(); j++) {
            sum += s[j] - '0';
        }

        next += to_string(sum);
    }

    s = next;
}

return s;
    }
};