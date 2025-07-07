class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size()-1; 

        while( low<= high){
            int mid = nums[low] + nums[high]; 
            if( mid == target) return {low+1,high+1}; 
            else if( mid < target) low++;
            else high--; 
        }
        return {};
        
    }
};