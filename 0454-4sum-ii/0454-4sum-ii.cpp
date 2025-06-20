 class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> abSumCount;
        int count = 0;

        
        for (int a : A) {
            for (int b : B) {
                abSumCount[a + b]++;
            }
        }

        for (int c : C) {
            for (int d : D) {
                int target = -(c + d);
                if (abSumCount.find(target) != abSumCount.end()) {
                    count += abSumCount[target];
                }
            }
        }

        return count;
    }
};

        
    
