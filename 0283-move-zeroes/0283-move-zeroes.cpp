class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int>ans(nums.size() , 0 ); 
        int j =0 ;
        for( auto x : nums){
            if( x != 0 ) ans[j++] = x; 
        }
        nums = ans ;
        
    }
};