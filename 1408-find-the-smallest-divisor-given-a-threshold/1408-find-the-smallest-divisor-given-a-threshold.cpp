class Solution {
public:
    int calculate(vector<int> & nums, int mid)
    {
        int sum=0; 
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil( (double)(nums[i]) / (double)(mid)); // might give an error  
        }
        return sum; 
    };
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n= nums.size(); 
        if(n>threshold) return -1; 
        int low=1; int high= *max_element(nums.begin(),nums.end()); 
        while(low<=high)
        {
            int mid = low+(high-low)/2; 
            int t= calculate(nums,mid); 

            if(t <= threshold)
            {
                high=mid-1; 
            }
            else
            {
                low=mid+1; 
            }
        }
        return low; // might try mid as well 
    }
};