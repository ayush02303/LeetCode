class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end()); 

        stringstream ss(s); 
        string word = "";
        string ans; 

        while( ss>> word){
            reverse(word.begin(), word.end()); 
            ans += " "+word; 
        }
        return ans.substr(1); 
    }
};