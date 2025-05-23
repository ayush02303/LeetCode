class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int>st; 
        vector<int>ans; 

        for( auto num : nums)
        {
            if(st.count(num))
            {
                ans.push_back(num);
            }
            st.insert(num); 

        }
        return ans;
    }
};