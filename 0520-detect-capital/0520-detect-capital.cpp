class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size(); 
        int uppercount = 0; 
        
        for( auto num : word){
            if(isupper(num)) uppercount+=1; 
        }
        if( uppercount == n) return true; 
        else if( uppercount == 0) return true; 
        else if( uppercount == 1 && isupper(word[0])) return true;
        else return false;
        
    }
};