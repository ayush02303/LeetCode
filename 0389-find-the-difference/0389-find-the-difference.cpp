class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for (char c : s) ans ^= c;   // XOR all chars of s
        for (char c : t) ans ^= c;   // XOR all chars of t
        return ans;                  // leftover is the extra char
    }
};
