class Solution {
public:
    void findCombinations(vector<int>& candidates, int target, vector<vector<int>>& result,
                          vector<int>& combination, int index) {
        // Base case: if target becomes 0, we found a valid combination
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        // Base case: if target < 0 or index goes out of bounds
        if (target < 0 || index >= candidates.size()) return;

        // Choice 1: Include current element (can reuse it)
        combination.push_back(candidates[index]);
        findCombinations(candidates, target - candidates[index], result, combination, index);
        combination.pop_back();  // backtrack

        // Choice 2: Exclude current element and move to the next
        findCombinations(candidates, target, result, combination, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;

        findCombinations(candidates, target, result, combination, 0);
        return result;
    }
};
