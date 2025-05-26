class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mp; 
        vector<int>ans; 

        for(auto num : nums){
            mp[num]++; 
        }
        for( auto num : nums){
            if( mp[num] ==2){
                ans.push_back(num); 
                  mp[num] = 0; // this was out from my logic 
            } 
        }
        
        
        int result = 0;
        for (auto num : ans) {
            result ^= num;  // XOR all duplicates
        }

        return result;

    
        
    }
};