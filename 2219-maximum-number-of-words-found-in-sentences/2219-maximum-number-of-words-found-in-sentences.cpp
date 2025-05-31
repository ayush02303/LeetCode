class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
        for (int i = 0; i < sentences.size(); i++) {
            int curr_cnt = 0;
            for (auto c : sentences[i]) {
                if (c == ' ') {
                    curr_cnt += 1;
                }
                maxi = max(maxi, curr_cnt);
            }
        }
        return maxi+1;
    }
};