class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int count = 1, maxCount = 1;  // at least 1 since string is non-empty
        
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                count++;  // extend streak
                maxCount = max(maxCount, count);
            } else {
                count = 1; // reset streak
            }
        }
        
        return maxCount;
    }
};
