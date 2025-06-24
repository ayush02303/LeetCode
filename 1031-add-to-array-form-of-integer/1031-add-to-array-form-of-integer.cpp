class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int i = num.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                i--;
            }
            result.push_back(k % 10);
            k /= 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
