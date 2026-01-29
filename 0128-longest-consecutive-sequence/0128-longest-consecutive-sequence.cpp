class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin() , nums.end());
        int longest = 0 ; 
        int lastSmaller = INT_MIN;  
        int count = 0 ; 
        int n = nums.size(); 

        for( int i = 0 ; i< n ; i++){

            if( nums[i]-1 == lastSmaller ){
                count+=1; 
                lastSmaller = nums[i]; 
            }
            else if( nums[i] != lastSmaller){
                count = 1; 
                lastSmaller  = nums[i];
            }
            longest = max(longest, count); 

        }
        return longest;

        
    }
};