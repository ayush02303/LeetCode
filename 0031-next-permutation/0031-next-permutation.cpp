class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(); 
        int pivot=-1; 

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i] <nums[i+1])
            {
                pivot=i; 
                break;
            }

        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end()); 
            return; 
        }

        for(int j=n-1;j>pivot;j--)
        {
            if(nums[j] > nums[pivot])
            {
                swap(nums[j],nums[pivot]); 
                break; 

            }
        }

        int i=pivot+1,j=n-1;
        while(i<=j)
        {
            swap(nums[i++],nums[j--]);
        }
    
    }
};
