class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long p=1; 
        for(int i=0;i<nums.size();i++)
        {
            p= p*nums[i]; 
        }
        if(p>0) return 1; 
        else if(p<0) return -1; 
        else return 0;
        
    }
};