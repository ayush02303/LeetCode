class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        set<pair<int, int>> seen;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    int a = min(nums[i], nums[j]);
                    int b = max(nums[i], nums[j]);
                    seen.insert({a, b});  // store in sorted order to avoid duplicates
                }
            }
        }

        return seen.size();
    }
};
