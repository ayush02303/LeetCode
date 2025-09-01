class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(); // small string 
        int n2 = s2.size();  // parent string 

        if( n1 > n2) return false; 
        sort( s1.begin(), s1.end()); 

        for( int i = 0 ; i<=  n2-n1 ; i++){
            string s3 = s2.substr(i,n1); 
            sort( s3.begin(), s3.end());

            if( s3 == s1) return true;


        }
        return false;
        
    }
};