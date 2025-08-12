class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st; // will store indices

        // Traverse twice (simulate circular array)
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n; // circular index

            // Pop smaller/equal elements
            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }

            // Only set ans in the first pass
            if (i < n && !st.empty()) {
                ans[idx] = nums[st.top()];
            }

            // Push current index
            st.push(idx);
        }

        return ans;
    }
};
