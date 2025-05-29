class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse from the end of the string
        for (int i = num.length() - 1; i >= 0; i--) {
            // Check if the digit is odd
            if ((num[i] - '0') % 2 == 1) {
                // Return substring from start to current index
                return num.substr(0, i + 1);
            }
        }
        return ""; // No odd digit found
    }
};
