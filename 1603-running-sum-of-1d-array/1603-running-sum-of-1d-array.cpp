class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size()); 
        ans[0] = nums[0]; 
        int n = nums.size(); 

        for( int i = 1 ; i< n ; i++){
            ans[i] = ans[i-1] + nums[i];

        }

        return ans;
        
    }
};