class Solution {
public:
    long long minimumSteps(string chars) {
          long long curr = 0; 
        int black = 0; 
        int n = chars.size(); 

        for( int i = 0 ; i< n ; i++){
            if( chars[i] == '0') curr+= black;
            else black++; 
        }
        return curr;
        
        
    }
};