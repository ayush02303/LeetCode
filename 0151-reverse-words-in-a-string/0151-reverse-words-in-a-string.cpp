class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());  // Step 1: Reverse the entire string
        stringstream ss(s);           // Step 2: Use stringstream to split by spaces
        string word;
        string ans = "";

        while (ss >> word) {
            reverse(word.begin(), word.end());  // Step 3: Reverse each word
            ans += word + " ";                  // Step 4: Append word and space
        }

        // Step 5: Remove trailing space (if ans is not empty)
        if (!ans.empty()) {
            ans.pop_back();
        }

        return ans;
    }
};
