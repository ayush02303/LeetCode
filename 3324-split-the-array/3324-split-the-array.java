class Solution {
    public boolean isPossibleToSplit(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();

        for (int num : nums) {
            int count = mp.getOrDefault(num, 0);
            if (count == 2) return false;
            mp.put(num, count + 1);
        }
        return true;
    }
}
