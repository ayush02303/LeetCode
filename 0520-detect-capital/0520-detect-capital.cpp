class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size(); 
        int uppercount = 0; 

        for( char ch : word){
            if( isupper(ch)) uppercount+=1; 
        }

        if( uppercount == n) return true; 
        else if( uppercount == 0) return true; 
        else if( uppercount == 1 && isupper(word[0])) return true; 
        else return false;
    }
};