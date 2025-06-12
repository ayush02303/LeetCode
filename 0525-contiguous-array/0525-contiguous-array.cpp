class Solution {
public:
    int findMaxLength(vector<int>& nums) {
          unordered_map<int, int> prefixIndex;
        prefixIndex[0] = -1; // Handle subarrays starting from index 0

        int maxLen = 0;
        int prefixSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // Treat 0 as -1 to balance with 1s
            prefixSum += (nums[i] == 0) ? -1 : 1;

            if (prefixIndex.find(prefixSum) != prefixIndex.end()) {
                maxLen = max(maxLen, i - prefixIndex[prefixSum]);
            } else {
                prefixIndex[prefixSum] = i;
            }
        }
        return maxLen;
    }
};