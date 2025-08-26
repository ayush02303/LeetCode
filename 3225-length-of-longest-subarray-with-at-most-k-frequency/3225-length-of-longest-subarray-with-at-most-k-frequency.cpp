class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq; 
        int left = 0, maxLen = 0; 

        for(int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;

            // If the current number’s frequency exceeds k, shrink window
            while(freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }

            // Update max length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
