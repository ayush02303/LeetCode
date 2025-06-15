class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ans; 
        for( int i =0 ; i<nums.size() ; i++){
            if( nums[i]%2==0){
                nums[i] =0; 
            }
            else{
                nums[i] =1; 
            }
            
        }
        sort(ans.begin(),ans.end());
        return nums;
    }
};