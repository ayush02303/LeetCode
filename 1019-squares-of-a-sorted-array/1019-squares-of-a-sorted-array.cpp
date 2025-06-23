class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size()); 
        int i= 0;

        for( auto num : nums){
            ans[i++] = abs(num*num); 
        }
        sort(ans.begin(),ans.end()); 
        return ans;
        
    }
};