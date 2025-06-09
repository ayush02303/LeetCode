class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp; 
        int count =0; 

        for( auto num : nums){
            mp[num]++; 
        }
        int maxi = INT_MIN; 

        for( auto num : mp){
            maxi = max(maxi,num.second); 
        }

        for( auto num : mp ){
            if( num.second == maxi )count+=num.second; 
        }
        return count; 

    }
};