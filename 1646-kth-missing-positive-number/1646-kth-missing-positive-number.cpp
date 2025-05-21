class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int low=0; int high = nums.size()-1; 

        while(low<=high)
        {
            int mid = low+(high-low)/2; 

            int t= nums[mid]- (mid+1); 
            if( t< k)
            {
                low=mid+1; 
            }
            else
            {
                high=mid-1; 
            }
        }
        return k+high+1;
    }
};