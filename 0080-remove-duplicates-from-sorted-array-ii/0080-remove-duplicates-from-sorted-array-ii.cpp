class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>count; 
        vector<int>ans; 

        for( auto num : nums){
            if(count[num] < 2){
                ans.push_back(num); 
                count[num]++;
            }
        }
        nums= ans; 
        return ans.size();
        
    }
};