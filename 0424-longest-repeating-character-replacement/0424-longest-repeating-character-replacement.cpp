class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);  // frequency of each character
        int left = 0, maxFreq = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            count[s[right] - 'A']++;
            maxFreq = max(maxFreq, count[s[right] - 'A']);

            // If window is invalid (more than k replacements needed)
            while ((right - left + 1) - maxFreq > k) {
                count[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
