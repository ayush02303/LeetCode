class Solution {
public:
    bool isValid( string &word){
        int n = word.size() ;
        int hyphencount =0, punctuationcount=0; 

        for( int i=0 ; i< word.size() ;i++){
            char c = word[i]; 

            if(isdigit(c)) return false ;

            if( c == '-'){
                hyphencount+=1; 
                if(hyphencount > 1) return false; 
                if( i ==0 || i== n-1) return false ;
                if( !islower(word[i-1]) || !islower(word[i+1])) return false;
            }

            if( c== '!' || c == '.' || c == ','){
                punctuationcount++; 
                if( punctuationcount > 1 || i != n-1) return false ;
            }

            if( !islower(c) && c != '-' && c!= '!' && c != '.' && c != ','){
                return false; 
            }
        }
        return true ;

    };
    int countValidWords(string sentence) {
        stringstream i( sentence);
            string word = " "; 
            int count=0; 

            while( i >> word){
                if( isValid(word)) count+=1; 
            }
             return count; 

        }
       
        
    };
