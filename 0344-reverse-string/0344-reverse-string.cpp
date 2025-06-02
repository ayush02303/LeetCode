class Solution {
public:
    void reverseString(vector<char>& nums) {
       // reverse( nums.begin(),nums.end()); 
       int low =0 ; 
       int high = nums.size()-1 ; 

       while(low< high){
        swap(nums[low++],nums[high--]); 
       }
        
        
    }
};