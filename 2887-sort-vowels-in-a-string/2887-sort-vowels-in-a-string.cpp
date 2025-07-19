class Solution {
public:
    bool isVowel(char ch ){
        ch = tolower( ch); 
        return ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    };
    string sortVowels(string s) {
        string temp; 

        for( char c : s){
            if( isVowel(c)) temp.push_back(c); 
        }
        sort( temp.begin(),temp.end()); 
        int j = 0; 

        for( int i = 0 ; i< s.size() ; i++){
            if( isVowel(s[i])) s[i] = temp[j++]; 
        }
        return s;
    }
};