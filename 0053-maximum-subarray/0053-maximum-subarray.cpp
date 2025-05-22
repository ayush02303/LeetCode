class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN; 
        int count=0; 

        for(int i=0; i<nums.size() ;i++)
        {
            count = count+ nums[i]; 

            maxi =max(maxi,count);

           if(count<0) count=0;
        }
        return maxi;
        
    }
};
