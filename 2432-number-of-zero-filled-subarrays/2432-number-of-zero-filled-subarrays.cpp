class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, result = 0;

        for (int num : nums) {
            if (num == 0) {
                count++;
                
            } else {
                count = 0;
            }
            result += count;
        }

        return result;
    }
};
