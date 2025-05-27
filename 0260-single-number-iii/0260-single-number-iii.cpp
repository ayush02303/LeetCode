class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans; 

        for(auto num : nums){
            mp[num]++; 
        }
        for( auto num : nums)
        {
            if(mp[num] == 1){
                ans.push_back(num); 
            }
        }
        return ans; 
    }
};