class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
         unordered_set<int> s(arr.begin(), arr.end());

    for (int i = 1; i <= arr.size() + 1; i++) {
        if (s.find(i) == s.end())
            return i;
    }
    return -1;

        
    }
};