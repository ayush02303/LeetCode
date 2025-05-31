class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;

        for (char c : sentence) {
            if (c >= 'a' && c <= 'z') {
                letters.insert(c);
            }
        }

        return letters.size() == 26;
    }
};
