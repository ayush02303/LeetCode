class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        for( int i = 0 ; i < nums.size() ; i++){
            int smallest = nums[i]; 
            int largest = nums[i]; 

            for( int j = i; j< nums.size() ; j++){
                smallest = min( smallest , nums[j]); 
                largest = max( largest , nums[j]); 

                sum += ( largest - smallest); 
            }
        }
        return sum;
    }
};