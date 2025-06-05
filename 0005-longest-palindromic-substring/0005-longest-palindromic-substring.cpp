class Solution {
public:
    bool isPalindrome( const string &s ,int i , int j){
        //int low =0 ; 
       // int high = j ; 
        while( i < j){
            if(s[i] != s[j]) return false ; 
            i++; 
            j--; 
        }
        return true;


    }
    string longestPalindrome(string s) {
        int maxlength =0 ;
        int start =0; // starting index 
        int n = s.length(); 
        for( int i=0 ; i< n ; i++){
            for( int j = i; j<n ;j++){
                if(  isPalindrome(s,i,j) ){
                    int length = j-i+1; 

                    if(length > maxlength){
                        maxlength = length; 
                        start = i; 
                    }
                }
            }
        }
        return s.substr(start,maxlength);
    }
};