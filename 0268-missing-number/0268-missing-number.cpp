class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        // insert all elements
        for (int x : nums) {
            st.insert(x);
        }

        // check from 0 to n
        for (int i = 0; i <= n; i++) {
            if (st.find(i) == st.end()) {
                return i;
            }
        }

        return -1; // safety
    }
};
