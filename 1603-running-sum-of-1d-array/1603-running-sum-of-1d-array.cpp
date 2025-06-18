class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>p(nums.size()); 
        p[0] = nums[0]; 

        for( int i =1 ; i< nums.size() ; i++){
            p[i] = p[i-1] + nums[i]; 
        }
        return p;
    }
};