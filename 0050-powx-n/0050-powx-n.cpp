class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;        // use long long to prevent overflow
        if (m < 0) {
            x = 1 / x;
            m = -m;
        }

        double ans = 1.0;
        while (m > 0) {
            if (m % 2 == 1) {
                ans *= x;
                m -= 1;
            } else {
                x *= x;
                m /= 2;
            }
        }
        return ans;
    }
};
