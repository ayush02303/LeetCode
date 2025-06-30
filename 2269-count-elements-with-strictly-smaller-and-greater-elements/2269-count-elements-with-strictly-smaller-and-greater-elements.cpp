class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MIN; 
        for( auto num : nums){
            mini = min(mini,num); 
            maxi = max(maxi,num); 
        }
        int count = 0; 
        for( auto num : nums){
            if( num> mini  && num < maxi) count+=1; 
        }
        return count;
        
    }
};