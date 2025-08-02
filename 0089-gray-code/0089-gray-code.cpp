class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        int total = 1 << n; // Total numbers in the sequence = 2^n
        
        for (int i = 0; i < total; ++i) {
            result.push_back(i ^ (i >> 1)); // Gray code formula
        }
        
        return result;
    }
};
