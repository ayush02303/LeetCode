class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        // Step 1: Count frequencies
        for (int num : arr) {
            mp[num]++;
        }

        unordered_set<int> seenFrequencies;

        // Step 2: Check for uniqueness of frequencies
        for (auto pair : mp) {
            if (seenFrequencies.count(pair.second)) {
                return false; // Duplicate frequency found
            }
            seenFrequencies.insert(pair.second);
        }

        return true; // All frequencies are unique
    }
};
