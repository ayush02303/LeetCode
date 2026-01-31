class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int, vector<int>> mp;
        int m = mat.size();
        int n = mat[0].size();

        // Step 1: collect diagonals
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mp[i - j].push_back(mat[i][j]);
            }
        }

        // Step 2: sort each diagonal
        for (auto &x : mp) {
            sort(x.second.begin(), x.second.end());
        }

        // Step 3: put back values (bottom-right → top-left)
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                mat[i][j] = mp[i - j].back();
                mp[i - j].pop_back();
            }
        }

        return mat;
    }
};
