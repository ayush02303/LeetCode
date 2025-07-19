class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCount = 0;
        for (char c : word) {
            if (isupper(c)) upperCount++;
        }

        int n = word.length();

        // Case 1: All letters uppercase
        if (upperCount == n) return true;

        // Case 2: All letters lowercase
        if (upperCount == 0) return true;

        // Case 3: Only the first letter is uppercase
        if (upperCount == 1 && isupper(word[0])) return true;

        return false;
    }
};
