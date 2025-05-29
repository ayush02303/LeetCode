class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); 
        string token = ""; 
        string result = ""; 

        while (ss >> token) {
            result = token + " " + result;
        }

        // Remove trailing space if result is not empty
        if (!result.empty()) {
            result.pop_back(); // removes the last space
        }

        return result;
    }
};
