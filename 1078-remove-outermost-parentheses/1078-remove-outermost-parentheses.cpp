class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result = "";

        for (char ch : s) {
            if (ch == '(') {
                // If stack is not empty, it's not an outermost '('
                if (!st.empty()) {
                    result += ch;
                }
                st.push(ch);
            } else {
                st.pop(); // popping a matching '('

                // If stack is not empty after pop, it's not an outermost ')'
                if (!st.empty()) {
                    result += ch;
                }
            }
        }

        return result;
    }
};
