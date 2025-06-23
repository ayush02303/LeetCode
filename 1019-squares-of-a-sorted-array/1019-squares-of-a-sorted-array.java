class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] ans = new int[nums.length]; 
        int i = 0; 

        for( int num : nums){
            ans[i++] = Math.abs( num*num); 
        }
        Arrays.sort(ans); 
        return ans;
        
    }
}