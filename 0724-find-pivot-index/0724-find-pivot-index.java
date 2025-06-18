class Solution {
    public int pivotIndex(int[] nums) {
         int tot = 0; 
        for( int num : nums){
            tot+=num; 
        }
        int p =0; 
        for( int i =0 ; i<nums.length ; i++){
            
            if(  p == tot - p - nums[i]) return i;
            p+=nums[i]; 

        } 
        return -1;
        
    }
}