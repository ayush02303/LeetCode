class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int count = 0;

            // Count how many times nums[i] is already in result
            for (int j = 0; j < result.size(); ++j) {
                if (result[j] == nums[i]) {
                    count++;
                }
            }

            // Add to result only if it appears less than 2 times
            if (count < 2) {
                result.push_back(nums[i]);
            }
        }

        // Copy back to nums (simulate in-place)
        for (int i = 0; i < result.size(); ++i) {
            nums[i] = result[i];
        }

        return result.size();
    }
};
