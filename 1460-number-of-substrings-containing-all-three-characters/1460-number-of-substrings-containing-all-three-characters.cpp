class Solution {
public:
    int numberOfSubstrings(string s) {
         int count =0; 
        for( int i=0; i< s.size() ;i++){
           
            bool a =false,b= false , c = false ; 
            for( int j=i ; j< s.size() ;j++){
                if(s[j] == 'a') a = true; 
                if(s[j] == 'b') b = true; 
                if( s[j] == 'c')c = true;

                if(a && b && c){
                    count+= (s.size()-j); 
                    break; 
                }

            }
        }
        return count;
    }
};