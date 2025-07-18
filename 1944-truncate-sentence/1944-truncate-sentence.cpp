class Solution {
public:
    string truncateSentence(string s, int k) {
        string result ; 
        int count = 0; 

        for( auto c : s){
            if( c == ' '){
                count+=1; 
            }
            if( count == k) break; 

            result+= c; 
        }
        return result;
    }
};