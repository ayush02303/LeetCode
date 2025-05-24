class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> mp;
        vector<int> ans;

        for (auto num : nums) {
            if (mp.count(num)) {
                ans.push_back(num);
            }
            mp.insert(num);
        }
        return ans;
    }
};