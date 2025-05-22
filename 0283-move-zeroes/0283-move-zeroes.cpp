class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size(); 
        vector<int>ans; 
        for(int num:nums)
        {
            if(num!=0)
            {
                ans.push_back(num);
            }
            else
            {

            }
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i]; 
        }
        for(int i=ans.size();i<nums.size();i++)
        {
            nums[i]=0;
        }


        
    }

};