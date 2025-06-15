class Solution {
    public int[] applyOperations(int[] nums) {
        // Step 1: Apply the doubling rule
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }

        // Step 2: Shift non-zero values to the front
        List<Integer> ans = new ArrayList<>();
        for (int num : nums) {
            if (num != 0) ans.add(num);
        }

        // Step 3: Add zeros to the end to match original array size
        while (ans.size() < nums.length) {
            ans.add(0);
        }

        // Step 4: Convert List<Integer> to int[]
        int[] result = new int[nums.length];
        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;
    }
}
