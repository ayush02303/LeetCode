class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(); 
        int n = s2.size(); 

        if( m > n) return false; 

        sort( s1.begin(), s1.end()); 

        for( int i = 0; i<= n- m; i++){
            string substring = s2.substr(i,m);
            sort( substring.begin(), substring.end()); 

            if( s1 == substring) return true; 
        }
        return false;


        
    }
};