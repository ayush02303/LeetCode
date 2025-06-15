class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>mp; 
        for( auto num : nums){
            if(mp[num] == 2) return false;
            mp[num]++; 
        }
        return true;
        
        
    }
};

