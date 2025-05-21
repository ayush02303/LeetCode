class Solution {
public:
    int calculate(vector<int>&nums, int mid, int m, int k)
    {
        int count=0; 
        int bouquets=0; 
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] <= mid)
            {
                count+=1; 
            }
            else
            {
                bouquets += (count/k); 
                count=0; 
            }
        }
         bouquets += (count / k);//why
    return bouquets >= m;
    };
    int minDays(vector<int>& nums, int m, int k) {
        int low= *min_element(nums.begin(),nums.end()); 
        int high=*max_element(nums.begin(),nums.end()); 
        int n = nums.size(); 
        long long  val = (long long)(m) * (long long)(k);
        if(n<val) return -1; 
        // if(val > n) return -1;

        while(low<=high)
        {
            int mid= low+(high-low)/2; 

            if( calculate(nums,mid,m,k))
            {
                high= mid-1; 
            }
            else
            {
                low=mid+1; 
            }
        }
        return low;


        
    }
};