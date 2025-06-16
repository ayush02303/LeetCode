class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        
        unordered_map<int, int> rank;
        int r = 1;
        
        for (int num : sorted) {
            if (rank.count(num) == 0) {
                rank[num] = r++;
            }
        }

        vector<int> result;
        for (int num : arr) {
            result.push_back(rank[num]);
        }

        return result;
    }
};
