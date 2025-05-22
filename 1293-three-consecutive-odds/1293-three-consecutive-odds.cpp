class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0 )
            {
                count+=1; 
                if(count==3) return true;
            }
            else
            {
                count=0; 
            }
        }
        return false;
        
    }
};