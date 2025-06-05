class Solution {
public:
    bool isPalindrome( const string &s , int i, int j){
        
        while( i < j){
            if(s[i] != s[j] ) return false ; 
            i++;  
            j--; 

        } 
        return true ; 


    }
    string longestPalindrome(string s) {
        int start = 0;
        int n = s.size(); 
        int length = 0; 
        int maxlength = 0; 

        for( int i =0 ; i< s.size() ; i++){
            for( int j =i ; j< n ;j++){
               if( isPalindrome( s, i,j)){
                length = j-i +1;
                if( length > maxlength){
                    maxlength = length; 
                   start = i; 
                } 


                
               }
            }
        }
        return s.substr(start,maxlength);
    }
};