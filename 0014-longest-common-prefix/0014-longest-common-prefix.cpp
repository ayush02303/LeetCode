class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";

        if (s.empty()) return ans;

        for (int i = 0; i < s[0].length(); i++) {
            for (int j = 0; j < s.size() - 1; j++) {
                if (i >= s[j].length() || i >= s[j+1].length() || s[j][i] != s[j+1][i]) {
                    return ans;
                }
            }
            ans += s[0][i]; // Add the common character after confirming all strings match at position i
        }

        return ans;
    }
};
