class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int t = 0; 
        for( auto num : nums){
            t+=num; 
        }
        
        int s = 0 ;

        for( int i = 0 ; i< nums.size() ; i++){
            int val = nums[i];
             t-= val; 

             nums[i] = abs(t-s); 
             s+=val; 
        }
        return nums;
    }
};