class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = ""; 
        int count = 0 ; 

        for( char ch : s){
            if( ch == ' ') count+=1; 
            if( count == k) break;
            result+= ch; 
        }
        return result;
    }
};