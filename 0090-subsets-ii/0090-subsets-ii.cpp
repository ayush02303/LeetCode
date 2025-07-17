class Solution {
private:
    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        ans.push_back(output);  // Every combination is valid (including empty)

        for (int i = index; i < nums.size(); i++) {
            // Skip duplicate elements
            if (i > index && nums[i] == nums[i - 1]) continue;

            output.push_back(nums[i]);
            solve(nums, output, i + 1, ans);  // move to next index
            output.pop_back();  // backtrack
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // step 1: sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, 0, ans);
        return ans;
    }
};
