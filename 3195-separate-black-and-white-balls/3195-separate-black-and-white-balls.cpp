class Solution {
public:
    long long minimumSteps(string s) {
        int black = 0 ; 
        long long  curr = 0; 
        int n = s.size(); 
        int i = 0; 

        while( i < n){
            if( s[i] == '0') curr+= black; 
            else black++;

            i++;
        }
        return curr;
        
    }
};