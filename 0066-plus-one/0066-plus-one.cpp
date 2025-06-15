class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            nums[i] += 1;
            return nums;

              else nums[i] = 0;
        }
        nums.push_back(0); 
    ans[0] = 1;
    return nums; 
      
    }
    
};