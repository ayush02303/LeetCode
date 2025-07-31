class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans; 
        int count = 0;
        for( auto ch : s){
            if( ch == ' ') count+=1; 
            if( count == k) break;
            ans+=ch; 
        }
        return ans;
        
    }
};