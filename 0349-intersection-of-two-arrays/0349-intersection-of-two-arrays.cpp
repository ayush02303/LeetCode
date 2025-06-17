class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
        int count = 0; 
        vector<int>ans;

        for( auto num : nums2){
            if(st.find(num) != st.end()){
                ans.push_back(num);
                st.erase(num); 
            }
        } 
        return ans;
        
    }
};