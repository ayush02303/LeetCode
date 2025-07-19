class Solution {
public:
    int minSteps(string s, string t) {
        int arr1[26] = {0}; 
        int arr2[26] = {0}; 

        // Count frequency of characters in s
        for(char ch : s)
            arr1[ch - 'a']++; 

        // Count frequency of characters in t
        for(char ch : t)
            arr2[ch - 'a']++; 

        int result = 0;

        // Sum of absolute differences for all 26 letters
        for(int i = 0; i < 26; i++)
            result += abs(arr1[i] - arr2[i]);

        return result;
    }
};
