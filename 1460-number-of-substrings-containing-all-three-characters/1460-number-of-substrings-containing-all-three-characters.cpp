class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size(); 
        int count =0; 

        for(int i=0 ; i< n ; i++){
            bool a = false,b= false, c= false;
            for(int j=i ; j< n ;j++){
                if( s[j] == 'a') a= true; 
                if( s[j] == 'b') b = true; 
                if( s[j] == 'c') c = true;

                if(a && b && c) {
                    count+=(n-j); 
                    break; 
                } 

            }
        }
        return count; 
    }
};