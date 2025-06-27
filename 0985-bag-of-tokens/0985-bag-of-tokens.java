import java.util.Arrays;

class Solution {
    public int bagOfTokensScore(int[] tokens, int P) {
        Arrays.sort(tokens);
        int currScore = 0;
        int maxScore = 0;
        int l = 0, r = tokens.length - 1;

        // GREEDY
        while (l <= r) {
            if (P >= tokens[l]) {
                P -= tokens[l];
                currScore++;
                maxScore = Math.max(maxScore, currScore);
                l++;
            } else if (currScore >= 1) {
                P += tokens[r];
                currScore--;
                r--;
            } else {
                return maxScore;
            }
        }

        return maxScore;
    }
}
