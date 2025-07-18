class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp; 
        mp[0] = -1; 
        int maxlen = 0; 
        int sum = 0; 

        for( int i =0 ; i<nums.size() ; i++){
            sum+=(nums[i] == 0 ) ? -1 : 1;

            if(mp.find(sum) != mp.end()) maxlen = max(maxlen,i-mp[sum]); 
            else  mp[sum] = i;
        }
        return maxlen ;
    }
};