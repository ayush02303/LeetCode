class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            if (isdigit(word[0])) {
                int num = stoi(word);
                if (num <= prev)
                    return false;
                prev = num;
            }
        }

        return true;
    }
};
