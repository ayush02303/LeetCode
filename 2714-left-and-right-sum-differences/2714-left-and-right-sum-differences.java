class Solution {
    public int[] leftRightDifference(int[] nums) {
        int t = 0; 
        for( int num : nums){
            t+=num; 
        }
        
        int s = 0 ;

        for( int i = 0 ; i< nums.length ; i++){
            int val = nums[i];
             t-= val; 

             nums[i] = Math.abs(t-s); 
             s+=val; 
        }
        return nums;
        
    }
}