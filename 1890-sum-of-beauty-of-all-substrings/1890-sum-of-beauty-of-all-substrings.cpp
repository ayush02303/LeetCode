class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            unordered_map<char, int> freq;
            for (int j = i; j < n; ++j) {
                freq[s[j]]++;  // Update freq map

                int maxFreq = 0, minFreq = INT_MAX;
                for (auto& pair : freq) {
                    maxFreq = max(maxFreq, pair.second);
                    minFreq = min(minFreq, pair.second);
                }

                totalBeauty += (maxFreq - minFreq);
            }
        }

        return totalBeauty;
    }
};
