class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0; 
        string result;

        for( auto ch : s){
            if( ch == ' ') count+=1; 
            if( count == k) break; 
            result+=ch;
        }
        return result;
    }
};