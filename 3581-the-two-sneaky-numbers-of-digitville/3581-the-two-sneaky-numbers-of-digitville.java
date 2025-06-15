class Solution {
    public int[] getSneakyNumbers(int[] nums) {
          HashMap<Integer, Integer> mp = new HashMap<>();

        // Count occurrences
        for (int num : nums) {
            mp.put(num, mp.getOrDefault(num, 0) + 1);
        }

        List<Integer> ans = new ArrayList<>();
        for (int num : nums) {
            if (mp.get(num) == 2) {
                ans.add(num);
                mp.put(num, 0); // So it's not added again
            }
        }

        // Convert List<Integer> to int[]
        int[] result = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;
        
    }
}