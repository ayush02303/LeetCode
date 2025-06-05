class Solution {
public:
    bool isPalindrome( const string &s , int low , int high){
        while( low < high){
            if(s[low] != s[high]) return false ;
            low++;  
            high--; 
        }
        return true;

    }
    bool validPalindrome(string s) {
        int low = 0; 
        int high = s.size()-1 ;

        while( low < high){
            if( s[low] == s[high]){
                low++; 
                high--; 

            }
            else{
                return isPalindrome(s, low+1, high) || isPalindrome(s,low,high-1); 
            }
        }
        return true; 
    }
};