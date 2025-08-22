class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0; 
        long long currsum = 0; 
        unordered_set<int>st; 
        int n = nums.size(); 
        long long  result  = 0; 

        while( j<n){
            while( st.count(nums[j])){
                currsum-=nums[i]; 
                st.erase(nums[i]); 
                i++; 
            }

            currsum+=nums[j]; 
            st.insert(nums[j]); 

            if( j-i+1 == k){
                 result = max(result, currsum);

                // Shrink the window from the left
                currsum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++; 
        }
        return result;
    }
};