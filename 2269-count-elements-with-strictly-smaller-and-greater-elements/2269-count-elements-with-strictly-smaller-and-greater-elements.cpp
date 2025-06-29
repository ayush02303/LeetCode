class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0; 
        int n = nums.size(); 
        for( int i = 0 ; i< n ; i++){
            int greater = 0,smaller=0;
            for(int j = 0 ; j<n ; j++){
                if( nums[j] > nums[i]) greater+=1;
                if( nums[j] < nums[i]) smaller+=1; 
            }
            if( greater!=0 && smaller!= 0) count+=1; 
        }
        return count; 
        
    }
};