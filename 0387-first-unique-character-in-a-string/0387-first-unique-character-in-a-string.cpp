class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        // Count frequency of each character
        for (char c : s) {
            mp[c]++;
        }

        // Find the first character with frequency 1
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i; // return index
            }
        }

        return -1; // no unique character found
    }
};
