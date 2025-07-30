class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;  // XOR gives the differing bits
        int count = 0;

        while (ans > 0) {
            if (ans & 1) count++;  // check if the least significant bit is 1
            ans >>= 1;             // right shift to check the next bit
        }

        return count;
    }
};
