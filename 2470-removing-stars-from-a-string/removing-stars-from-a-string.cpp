class Solution {
public:
    string removeStars(string s) {
        // If the input string is empty, return an empty string
        if (s.size() == 0) return "";

        // Stack to store characters that are not '*'
        stack<char> st;

        // Iterate through each character in the string
        for (int i = 0; i < s.size(); i++) {
            // If current character is not '*', push it to the stack
            if (s[i] != '*') {
                st.push(s[i]);
            } else {
                // If current character is '*', remove the top character from the stack
                // This simulates "removing" the character before '*'
                if (!st.empty()) st.pop();
            }
        }

        // If the stack is empty, return an empty string
        if (st.empty()) return "";

        // Create a string to store the final result
        string result = "";

        // Pop characters from the stack and append to result string
        while (!st.empty()) {
            char ch = st.top();
            result += ch;
            st.pop();
        }

        // The characters were added in reverse order, so reverse the string
        reverse(result.begin(), result.end());

        // Return the final string after removing stars and reversing
        return result;
    }
};
