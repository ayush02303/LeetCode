class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a; 
        for( auto c : word1){
            a+=c; 
        }
        string b; 
        for( auto c : word2){
            b+=c;
        }
        return a == b;
    }
};