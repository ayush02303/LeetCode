class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());  // Necessary for two-pointer approach

        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {
            int low = i + 1;
            int high = nums.size() - 1;

            while (low < high) {
                int currentSum = nums[i] + nums[low] + nums[high];

                if (currentSum == target) {
                    return currentSum;
                }

                // Update closest sum if needed
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                // Move pointers based on comparison
                if (currentSum < target) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        return closestSum;
    }
};
