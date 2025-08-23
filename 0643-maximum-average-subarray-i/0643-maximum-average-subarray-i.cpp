class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currsum = 0;
        // First window
        for (int i = 0; i < k; i++) {
            currsum += nums[i];
        }
        double maxavg = currsum / k;

        // Slide the window
        for (int j = k; j < nums.size(); j++) {
            currsum += nums[j] - nums[j - k];
            maxavg = max(maxavg, currsum / k);
        }
        
        return maxavg;
    }
};
