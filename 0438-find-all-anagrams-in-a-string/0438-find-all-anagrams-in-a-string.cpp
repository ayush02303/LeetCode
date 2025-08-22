class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int n = s.size(), m = p.size();
        if (n < m) return result;

        vector<int> pCount(26, 0), sCount(26, 0);

        // count frequency of p
        for (char c : p) {
            pCount[c - 'a']++;
        }

        // first window of size m
        for (int i = 0; i < m; i++) {
            sCount[s[i] - 'a']++;
        }

        if (sCount == pCount) result.push_back(0);

        // slide the window
        for (int i = m; i < n; i++) {
            sCount[s[i] - 'a']++;              // include new char
            sCount[s[i - m] - 'a']--;          // remove old char

            if (sCount == pCount) {
                result.push_back(i - m + 1);
            }
        }

        return result;
    }
};
