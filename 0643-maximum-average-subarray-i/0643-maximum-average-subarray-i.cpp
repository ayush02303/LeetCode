class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0; 
        for( int i = 0 ; i< k ; i++){
            sum+=nums[i]; 
        }
        int maxsum = sum; 

        int i = 0, j = k; 
        while(j< nums.size()){
            sum-=nums[i];
            i++; 

            sum+=nums[j]; 
            j++; 

            maxsum = max(maxsum, sum); 
        }
        return (double)maxsum/k; 
        
    }
};