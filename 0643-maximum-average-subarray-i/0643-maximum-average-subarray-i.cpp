class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int i =0;
        int n = nums.size(); 
        

        for( int i = 0; i< k ; i++){
            sum+= nums[i];
        }
        int j = k; 
        int maxsum = sum; 

        while( j< n){
            sum-= nums[i]; 
            i++; 

            sum+= nums[j]; 
            j++; 

            maxsum = max( maxsum ,sum); 
        }
        return (double)maxsum/k; 
        
    }
};