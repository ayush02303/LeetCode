class Solution {
public:
    int  calculate(vector<int>& nums, int mid)
    {
        int days=1; 
        int load=0; 

        for(int i=0; i<nums.size();i++)
        {
            if(load+nums[i] > mid)
            {
                days+=1; 
                load= nums[i];  

            }
            else
            {
                load= load+ nums[i]; 
            }
        }
        return days;
    }; 
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end()); 
        int high = accumulate(weights.begin(),weights.end(),0); 

        while(low<=high)
        {
            int mid = low+(high-low)/2; 
            int t = calculate(weights,mid); 

            if(t <= days)
            {
                high = mid-1; 
            }
            else
            {
                low=mid+1; 
            }
        }
        return low; 
    }
};