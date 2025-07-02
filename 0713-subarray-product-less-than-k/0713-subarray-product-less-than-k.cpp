class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0; 
        if( k<=1) return 0;
        for( int i = 0 ;i< nums.size() ; i++){
            int prod = 1; 
            for( int j = i ; j< nums.size(); j++){
                prod*= nums[j]; 
                if(prod < k) count+=1;
                else break;
            }
        }
        return count; 
    }
};