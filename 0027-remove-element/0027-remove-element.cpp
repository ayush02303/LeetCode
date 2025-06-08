class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j =0; 
        for( auto num : nums){
            if( num !=  val){
                nums[j++] = num; 
            }
        }
        return j;
    }
};