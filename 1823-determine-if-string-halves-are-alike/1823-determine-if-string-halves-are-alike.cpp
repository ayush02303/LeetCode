class Solution {
public:
    bool isValid( char &ch){
         if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'U') return true;
        else return false;

    }
    bool halvesAreAlike(string s) {
        int  n = s.size(); 
        int i = 0; 
        int j = n/2;
        int lcount = 0; 
        int rcount = 0;  

        while( i< j && j < n){
            if( isValid( s[i])) lcount++; 
            if( isValid(s[j])) rcount++; 

            i++; 
            j++;  
 
        }
        return lcount == rcount; 


        
    }
};