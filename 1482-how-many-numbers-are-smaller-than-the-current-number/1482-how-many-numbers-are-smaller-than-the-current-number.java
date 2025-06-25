class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        List<Integer> ans = new ArrayList<>(); 
        
        for (int i = 0; i < nums.length; i++) {
            int count = 0; 
            for (int j = 0; j < nums.length; j++) {
                if (nums[j] < nums[i]) count += 1; 
            }
            ans.add(count); 
        }

        // Convert List<Integer> to int[]
        int[] result = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;
    }
}
