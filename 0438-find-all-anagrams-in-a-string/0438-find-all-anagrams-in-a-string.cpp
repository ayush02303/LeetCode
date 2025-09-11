class Solution {
public:
    bool isValid( vector<int> & count){
        return count == vector<int>(26,0); 
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans; 
        vector<int>count( 26, 0); 

        for( int i = 0 ; i< p.size() ; i++){
            count[ p[i] - 'a']++; 
        }

        int i = 0 ,j =0; 

        while( j < s.size()){
            count[ s[j] - 'a']--; 

            if( j-i+1 == p.size()){
                if( isValid( count)) ans.push_back(i); 

                count[ s[i] - 'a']++; 
                i++; 
            }
            j++; 

        }
        return ans; 
    }
};