class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {{'I', 1},   {'V', 5},   {'X', 10},
                                       {'L', 50},  {'C', 100}, {'D', 500},
                                       {'M', 1000}};

        int curr = 0;

        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] < mp[s[i + 1]])
                curr -= mp[s[i]];
            else
                curr += mp[s[i]];
        }
        return curr;
    }
};
