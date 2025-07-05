class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
         unordered_map<int, int> mp;

        for (auto num : nums) {
            if (num % 2 == 0)
                mp[num]++;
        }

        int maxFreq = 0;
        int ans = -1;

        for (auto [key, freq] : mp) {
            if (freq > maxFreq || (freq == maxFreq && key < ans)) {
                maxFreq = freq;
                ans = key;
            }
        }

        return ans;
        
    }
};