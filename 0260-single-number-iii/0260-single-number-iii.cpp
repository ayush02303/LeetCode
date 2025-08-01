class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans; 
        unordered_map<int,int>mp; 
        for( auto num : nums){
            mp[num]++;
        }

        for( auto num : mp){
            if( num.second == 1) ans.push_back(num.first);
        }
        return ans;
        
    }
};