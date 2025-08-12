class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp; 
        stack<int>st; 
        int res;

        for( int i = nums2.size()-1 ; i>=0 ; i--){
            while(!st.empty() && st.top() <= nums2[i]) st.pop(); 
            int res = ( st.empty()) ? -1  : st.top(); 
            mp.insert({ nums2[i] , res}); 
            st.push(nums2[i]); 
        }

        vector<int>ans; 
        for( auto num : nums1){
            ans.push_back(mp[num]); 
        }
        return ans;
        
    }
};