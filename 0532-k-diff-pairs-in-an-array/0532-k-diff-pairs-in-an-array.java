import java.util.*;

class Solution {
    public int findPairs(int[] nums, int k) {
        Set<List<Integer>> seen = new HashSet<>();

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (Math.abs(nums[i] - nums[j]) == k) {
                    int a = Math.min(nums[i], nums[j]);
                    int b = Math.max(nums[i], nums[j]);
                    seen.add(Arrays.asList(a, b));
                }
            }
        }

        return seen.size();
    }
}
