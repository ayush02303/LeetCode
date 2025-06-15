import java.util.*;

class Solution {
    public int removeDuplicates(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        List<Integer> ans = new ArrayList<>();

        for (int num : nums) {
            int count = mp.getOrDefault(num, 0);
            if (count < 2) {
                ans.add(num);
                mp.put(num, count + 1);
            }
        }

        // Copy modified list back to original array
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans.get(i);
        }

        return ans.size(); // New length of array
    }
}
