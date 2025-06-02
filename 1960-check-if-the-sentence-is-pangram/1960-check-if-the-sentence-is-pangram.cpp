class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp; 

        for( auto c: sentence){
            mp[c]++; 
        }
        return mp.size() == 26 ;
        
    }
};