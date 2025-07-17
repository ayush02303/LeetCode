class Solution {
public:
    bool isVowel( char ch){
        ch = tolower(ch); 
        return ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    };
    string sortVowels(string s) {

        string temp ; 

        for( int i = 0 ; i< s.size() ; i++){
            if( isVowel(s[i])) temp.push_back(s[i]); 
        }
        sort( temp.begin(), temp.end()); 
        int j= 0; 

        for( int i = 0 ; i< s.size() ; i++){
            if( isVowel(s[i])) s[i] = temp[j++]; 
        }
        return s;
    }
};