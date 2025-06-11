class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp; 
        for( auto c : s){
            if(mp.find(c) != mp.end()) return c; 
            mp[c]++;
        }
        return '\0'; 
    }
};