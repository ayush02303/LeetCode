class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0 ; 

        for( int i = 0 ; i< nums.size() ; i++){
            int largest = nums[i]; 
            int smallest = nums[i]; 

            for( int j = i ; j< nums.size() ; j++){
                largest = max(nums[j] , largest); 
                smallest = min( nums[j] , smallest);

                sum = sum + ( largest - smallest); 
            }
        }
        return sum; 
    }
};