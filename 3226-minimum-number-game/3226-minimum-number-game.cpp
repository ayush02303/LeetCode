class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        int j=1; 
        for(int i=0;i<nums.size();)
        {
            swap(nums[i],nums[j]); 
            j+=2; i+=2; 
        }
        return nums;
    }
};