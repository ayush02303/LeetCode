
        class Solution {
    public int countOdds(int low, int high) {
        // Number of odds in the range [low, high]
        int count = (high - low) / 2;

        // If either low or high is odd, we need to add 1
        if (low % 2 != 0 || high % 2 != 0) {
            count += 1;
        }

        return count;
    }
}

       