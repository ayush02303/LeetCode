class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        // Check for 32-bit signed integer overflow
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        return (int)rev;
    }
};
