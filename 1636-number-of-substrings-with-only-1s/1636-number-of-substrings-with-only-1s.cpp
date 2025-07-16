class Solution {
public:
    int MOD = 1e9 + 7;
    int numSub(string s) {

        int length = 0; 
        int n = s.size(); 
        long long result = 0; 

        for( int i = 0 ; i< n ; i++){
            if( s[i] == '1') length+=1; 
            else length = 0; 

            result = ( result + length) % MOD ;
        }
        return result;

        
    }
};