class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int mid = ( 0 + nums.size())/2; 
        return nums[mid]; 
        
    }
};