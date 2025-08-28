class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0, j = 0; 
        int n = s.size(); 
        int currcost = 0; 
        int maxLen = 0; 
        
        while( j< n){
            currcost += abs(s[j] - t[j]); 

            while( currcost > maxCost){
                currcost -= abs( s[i] - t[i]); 
                i++; 
            }

            maxLen = max( maxLen , j-i+1); 
            j++; 
        }
        return maxLen;
    }
};