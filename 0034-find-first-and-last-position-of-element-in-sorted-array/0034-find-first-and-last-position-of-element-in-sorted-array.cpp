class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int n = nums.size();

        // Find first occurrence
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                first = i;
                break;
            }
        }

        // Find last occurrence
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                last = i;
                break;
            }
        }

        return {first, last};
    }
};
