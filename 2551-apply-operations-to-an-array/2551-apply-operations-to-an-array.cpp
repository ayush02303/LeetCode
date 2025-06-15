class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0 ; i< nums.size()-1 ; i++){
            if( nums[i] != nums[i+1]) continue; 
            else {
                nums[i] = nums[i]*2; 
                nums[i+1] = 0; 
            }
        }
        vector<int>ans ; 
        for( auto num : nums){
            if( num!= 0) ans.push_back(num); 
        }
        while( ans.size() < nums.size()){
            ans.push_back(0); 
        }
        return ans; 

    }
};