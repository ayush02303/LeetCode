class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool>seen(nums.size() , false); 

        for( int i = 0; i< nums.size() ; i++){
            if(seen[nums[i]] == true) return nums[i];

            seen[nums[i]] = true; 
        }
        return -1; 
        
    }
};