class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string result = "";

        for (char c : s) {
            if (c == ' ') {
                count++;
                if (count == k)
                    break;
            }
            result += c;
        }

        return result;
    }
};
