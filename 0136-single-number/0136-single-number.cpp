class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp; 

        for( int num : nums){
            mp[num]++; 
        }

        for( auto num : mp){
            if( num.second == 1) return num.first; 
        }
        return -1;
    }
};