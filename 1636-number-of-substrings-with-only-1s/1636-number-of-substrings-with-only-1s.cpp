class Solution {
public:
    int MOD = 1e9 + 7;
    
    int numSub(string s) {
        int n = s.size(); 
        int length = 0; 
        long long result = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                length++;
                
            } else {
                length = 0;  // reset on '0'
            }
            result = (result + length) % MOD;
        }

        return result;
    }
};
