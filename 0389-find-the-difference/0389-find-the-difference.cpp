class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans = 0;
        for( auto c : s) ans^= c; 
        for( auto s : t) ans^= s; 
        return ans; 
        
    }
};