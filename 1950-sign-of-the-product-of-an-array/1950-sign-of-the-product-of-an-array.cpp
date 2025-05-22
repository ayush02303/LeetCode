class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negatives = 0;

        for (int num : nums) {
            if (num == 0) return 0;     // any 0 makes product 0
            if (num < 0) negatives++;   // count negative numbers
        }

        // Even number of negatives → positive product
        // Odd number of negatives → negative product
        return (negatives % 2 == 0) ? 1 : -1;
    }
};
