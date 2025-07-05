class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for( auto num : nums){
            if( num%2 == 0) mp[num]++; 
        }
        int maxfreq = 0 ; 
        int ans = -1 ; 

        for( auto [key,freq] : mp){
            if( freq > maxfreq || freq == maxfreq && key < ans){
                ans = key; 
                maxfreq = freq; 
            }

        }
        return ans;
        
    }
};