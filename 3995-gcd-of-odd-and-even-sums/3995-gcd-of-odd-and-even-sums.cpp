class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // From math deduction:
        // sumOdd = n^2
        // sumEven = n*(n+1)
        // gcd(sumOdd, sumEven) = n
        return n;
    }
};
