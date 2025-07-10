class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int count = 0; 
        for( int i = 0 ; i< s.length() ; i++){
            int v = 0,c = 0; 
            for( int j = i ; j< s.length(); j++){
                if( s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    v+=1;
                }
                else c+=1; 

                if( v == c && ( (v*c)%k == 0) ) count+=1;
            }
        }
        return count;
    }
};