class Solution {
    public void wiggleSort(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        Arrays.sort(nums);
        
        int j = n - 1;
        int i = 1;

      
        while (i < n) {
            ans[i] = nums[j--];
            i += 2;
        }

        i = 0;
      
        while (i < n) {
            ans[i] = nums[j--];
            i += 2;
        }

        
        for (i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }
}
