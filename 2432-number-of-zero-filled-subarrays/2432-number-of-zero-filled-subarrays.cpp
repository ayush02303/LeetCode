class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int res =0 ,count = 0; 
        for( auto num : nums){
            if(num == 0) count+=1; 
            else count = 0; 
            res+=count;
        }
        return res;
        
    }
};