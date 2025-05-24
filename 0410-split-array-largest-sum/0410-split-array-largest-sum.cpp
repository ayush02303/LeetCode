class Solution {
public:
    // Helper function: returns the number of subarrays needed if no subarray sum exceeds 'mid'
    int countSubarrays(vector<int>& nums, int mid) {
        int count = 1; // at least one subarray
        int currentSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (currentSum + nums[i] <= mid) {
                currentSum += nums[i];
            } else {
                count++;               // start new subarray
                currentSum = nums[i];  // reset current sum
            }
        }
        return count;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int pieces = countSubarrays(nums, mid);

            if (pieces > k) {
                low = mid + 1; // too many splits, increase allowed sum
            } else {
                result = mid;  // valid, try smaller sum
                high = mid - 1;
            }
        }
        return result;
    }
};
