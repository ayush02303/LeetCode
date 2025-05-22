class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 =accumulate(nums.begin(),nums.end(),0); 
        int sum2=0;
        //int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp= nums[i]; 
             
            while(temp!=0)
            {
                int rem = temp%10; 
                sum2+=rem; 

                temp=temp/10; 
            }
        }
        int final_sum = sum1-sum2; 
        return final_sum; 
    }
};