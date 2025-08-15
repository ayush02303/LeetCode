class Solution {
public:
    string removeKdigits(string num, int k) {
        string st; // acts like a stack
        
        for (char c : num) {
            // Remove larger digits to make the number smaller
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        
        // If k is still left, remove from the end
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }
        
        // Remove leading zeros
        int i = 0;
        while (i < st.size() && st[i] == '0') i++;
        
        string ans = st.substr(i);
        return ans.empty() ? "0" : ans;
    }
};
