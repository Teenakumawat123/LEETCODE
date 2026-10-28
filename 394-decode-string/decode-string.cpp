
class Solution {
public:
    string solve(int n, string s) {
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += s;
        }
        return ans;
    }

    string decodeString(string s) {
        stack<int> val;
        stack<string> st;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                val.push(num);
                st.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int k = val.top();
                val.pop();

                string repeated = solve(k, curr);

                curr = st.top() + repeated;
                st.pop();
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};
