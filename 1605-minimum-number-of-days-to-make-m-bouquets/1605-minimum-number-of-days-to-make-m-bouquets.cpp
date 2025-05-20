class Solution {
public:
    int possible(vector<int> nums ,int mid, int m, int k)
    {
        int n= nums.size(); 
        int count=0; 
        int bquet=0; 

        for(int i=0; i<n;i++)
        {
            if(nums[i] <= mid)
            {
                count+=1; 
            }
            else
            {
                 bquet += (count / k);
                 count = 0;
            }
            
        }
         bquet += (count / k);//why
    return bquet >= m;
    };
    int minDays(vector<int>& nums, int m, int k) {
        int low = *min_element(nums.begin(),nums.end()); 
        int high= *max_element(nums.begin(),nums.end()); 
        //int val = m*k;
         //long long val = m * 1ll * k * 1ll; 
         long long val= (long long)(m) *(long long)(k); 
         int n= nums.size(); 
         if(val > n) return -1; 
         while(low<= high)
         {
            int mid = low+(high-low)/2; 

            if(possible(nums,mid,m,k))
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