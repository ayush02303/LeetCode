class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Count frequencies of each element
        for (auto num : nums) {
            mp[num]++;
        }

        int maxFreq = 0;

        // Find the maximum frequency
        for (auto it : mp) {
            maxFreq = max(maxFreq, it.second);
        }

        int count = 0;

        // Sum elements that have max frequency
        for (auto it : mp) {
            if (it.second == maxFreq) {
                count += it.second;
            }
        }

        return count;
    }
};
