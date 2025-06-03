class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mp; 

        for( auto num : nums){
            mp[num]++; 
        }

        vector<int>ans; 
        for( auto num : nums){
            if(mp[num] == 2) {
                ans.push_back(num);
                mp[num] =1;
            } 
        }
        return ans ;
    }
};