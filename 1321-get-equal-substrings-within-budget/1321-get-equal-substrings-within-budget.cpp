class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0, j = 0; 
        int maxcost = 0, currcost = 0; 
        while( j < s.size()){
            currcost += abs( s[j] - t[j]); 

            while( currcost > maxCost ){
                currcost -= abs( s[i] - t[i]); 
                i++; 
            }
            maxcost = max( maxcost , j-i+1); 
            j++; 
        } 
        return maxcost;
        
    }
};