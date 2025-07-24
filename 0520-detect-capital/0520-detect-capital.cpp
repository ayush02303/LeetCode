class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercount = 0; 
        for( auto ch : word){
            if( isupper(ch)) uppercount+=1; 
        }
        int n = word.size(); 
        if( uppercount == n) return true; 
        else if( uppercount == 0) return true; 
        else if( uppercount == 1 &&  isupper(word[0])) return true; 
        else return false;
        
    }
};