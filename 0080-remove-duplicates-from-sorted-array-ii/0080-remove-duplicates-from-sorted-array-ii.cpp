class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp; 
        vector<int>ans; 

        for( auto num : nums){
            if( mp[num] < 2) ans.push_back(num); 
            mp[num]++;
        }
        nums = ans; 
        return ans.size(); 
        
    }
};