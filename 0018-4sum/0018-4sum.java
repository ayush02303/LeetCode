class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n = nums.length; 
         List<List<Integer>>ans = new ArrayList<>(); 
         if( n< 4) return ans;
         Arrays.sort(nums); 

         for(int i = 0 ; i< n-3 ;i++ ){
            if( i>0 && nums[i] == nums[i-1]) continue; 
            for(int j = i+1 ; j<n-2 ; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int low = j+1; 
                int high = n-1; 

                while( low < high ){
                    long sum = (long)nums[i]+ (long)nums[j] + (long)nums[low]+(long)nums[high];
                    if( sum == target){
                          ans.add(Arrays.asList(nums[i], nums[j], nums[low], nums[high]));

                        while( low< high && nums[low] == nums[low+1]) low++; 
                        while( low< high && nums[high] == nums[high-1]) high--; 

                        low++; 
                        high--;
                    }
                    else if( sum < target) low++; 
                    else high--; 

                }
                
            }
         } 

        return ans;
        
    }
}