class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        int sign = 1;  // Start with '+'

        for (char c : s) {
            int digit = c - '0';
            sum += sign * digit;
            sign *= -1;  // Alternate sign
        }

        return sum;
    }
};
