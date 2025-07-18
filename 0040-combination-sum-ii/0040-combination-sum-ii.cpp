//S.C : O(n)
class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int> curr, vector<vector<int>>& result, int idx) {
        if(target < 0)
            return;
        if(target == 0) {
            result.push_back(curr);
            return;
        }
        
        for(int i = idx; i<candidates.size(); i++) {
            if(i > idx && candidates[i] == candidates[i-1])
                continue; //ignore duplicate elements
            curr.push_back(candidates[i]);
            solve(candidates, target-candidates[i], curr, result, i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> curr;
        sort(candidates.begin(), candidates.end()); //because we will ignore duplicate elements
        solve(candidates, target, curr, result, 0);
        return result;
    }
};