class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>small(26,-1); 
        vector<int>large(26,-1); 

        for( int i = 0; i< word.size() ; i++){
            int ch = word[i];
            if( islower(ch))  small[ ch - 'a'] = i; 
            else if( large[ ch - 'A'] ==-1 ) large[ ch - 'A'] = i;
        }
        int ans = 0; 

        for( int i = 0; i < 26 ; i++){
                if( small[i] != -1 && large[i] != -1 &&  large[i] > small[i]) ans+=1;
        }
        return ans;

        
    }
};