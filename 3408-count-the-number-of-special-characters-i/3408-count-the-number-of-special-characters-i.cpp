class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,-1); 
        vector<int>upper( 26,-1); 

        for( int i = 0; i< word.size() ; i++){
            if( islower( word[i])) lower[ word[i] - 'a']++; 
            else if(isupper( word[i])) upper[ word[i] - 'A']++; 
        }
        int ans = 0; 
        for( int i= 0 ; i < 26 ; i++){
            if( upper[i] != -1 && lower[i] != -1 ) ans+=1; 
        }
        return ans; 
        
    }
};