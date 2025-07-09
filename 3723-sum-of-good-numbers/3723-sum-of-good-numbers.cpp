class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0; 
        for( int i = 0 ; i < nums.size() ; i++){
            bool ans = true; 
            if( (i-k) >= 0){
                if( nums[i] <= nums[i-k]) ans = false;
            }
            if( (i+k) < nums.size() ){
                if( nums[i] <= nums[i+k] ) ans = false;
            }
            if( ans){
                sum+=nums[i];
            }

        }
        return sum;
    }
};