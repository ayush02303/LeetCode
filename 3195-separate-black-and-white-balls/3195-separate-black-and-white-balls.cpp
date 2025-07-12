class Solution {
public:
    long long minimumSteps(string s) {
        int black = 0; 
        long long currsum = 0; 

        for( int i = 0 ; i < s.length() ; i++){
            if( s[i] == '0') currsum+= black; 
            else black+=1;
        }
        return currsum;
    }
};