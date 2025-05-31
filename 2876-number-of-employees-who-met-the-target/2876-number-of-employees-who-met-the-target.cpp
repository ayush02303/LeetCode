class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& nums, int target) {
        int count =0; 
        for( auto num : nums){
            if(num >= target){
                count+=1; 
            }
        }
        return count;

        
    }
};