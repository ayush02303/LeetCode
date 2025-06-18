class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot = 0; 
        for( auto num : nums){
            tot+=num; 
        }
        int p =0; 
        for( int i =0 ; i<nums.size() ; i++){
            
            if(  p == tot - p - nums[i]) return i;
            p+=nums[i]; 

        } 
        return -1;
    }
};