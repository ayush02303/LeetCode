class Solution {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // Done!
            }
            digits[i] = 0; // Set to 0 and carry over
        }

        // All digits were 9: create a new array [1, 0, 0, ..., 0]
        int[] result = new int[digits.length + 1];
        result[0] = 1; // e.g. 999 + 1 = 1000
        return result;
    }
}
