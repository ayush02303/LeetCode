class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;

        int[] ans = new int[n];
        int[] left = new int[n];
        int[] right = new int[n];

        // Fill left[] such that left[i] = product of all elements to the left of index i
        left[0] = 1;
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Fill right[] such that right[i] = product of all elements to the right of index i
        right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Multiply left and right for the final result
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
}
