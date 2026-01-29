class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1; 
        int longest = 1; 

        for( int i = 1 ; i< s.size() ; i++){
            if( s[i] == s[i-1]+1) count+=1; 
            else count = 1; 

            longest = max(longest, count); 
        }
        
        return longest;
    }
};