class Solution {
public:
    int calculate(vector<int> &nums, int mid)
    {
        int days=1; 
        int load=0; 
        for(int i=0;i<nums.size();i++)
        {
            if( load+nums[i] > mid)
            {
                days+=1; 
                load=nums[i]; 
            }
            else
            {
                load=load+ nums[i]; 
            }
        }
        return days; 
    };

    int shipWithinDays(vector<int>& nums, int days) {
        int low= *max_element(nums.begin(),nums.end()); 
        int high= accumulate(nums.begin(),nums.end(),0); //returns total sum of array

        while(low<=high)
        {
            int mid= low+(high-low)/2; 

            int t= calculate(nums,mid); 
            if(t <= days)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1; 
            }


        }
        return low; 
    }
};