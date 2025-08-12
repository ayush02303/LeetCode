class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nextGreater(n, -1); 
        stack<int> st; // will store elements (not indices)

        // Step 1: Traverse nums2 from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Remove smaller or equal elements
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            // If stack is not empty, top is the next greater
            if (!st.empty()) {
                nextGreater[i] = st.top();
            }
            // Push current element
            st.push(nums2[i]);
        }

        // Step 2: Build result for nums1
        vector<int> res;
        for (int num : nums1) {
            for (int i = 0; i < n; i++) {
                if (nums2[i] == num) {
                    res.push_back(nextGreater[i]);
                    break;
                }
            }
        }
        return res;
    }
};
