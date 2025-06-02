class Solution {
public:
    bool isValid(string& word) {
        int n = word.size();
        int hyphenCount = 0, punctuationCount = 0;

        for (int i = 0; i < n; ++i) {
            char c = word[i];

            if (isdigit(c)) return false;

            if (c == '-') {
                hyphenCount++;
                if (hyphenCount > 1) return false;
                if (i == 0 || i == n - 1) return false;
                if (!islower(word[i - 1]) || !islower(word[i + 1])) return false;
            }

            if (c == '!' || c == '.' || c == ',') {
                punctuationCount++;
                if (punctuationCount > 1 || i != n - 1) return false;
            }

            if (!islower(c) && c != '-' && c != '!' && c != '.' && c != ',') {
                return false;
            }
        }

        return true;
    }

    int countValidWords(string sentence) {
        istringstream iss(sentence);
        string word;
        int count = 0;

        while (iss >> word) {
            if (isValid(word)) count++;
        }

        return count;
    }
};
