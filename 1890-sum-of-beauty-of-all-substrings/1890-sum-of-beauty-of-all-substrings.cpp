class Solution {
public:
    int beautySum(string s) {
        int count =0; 
        for( int i =0 ; i<s.size() ; i++){
            unordered_map<char,int>mp; 
            for( int j=i ;  j< s.size() ;j++){
                mp[s[j]]++; 

                int maxfreq=0, minfreq = INT_MAX ;

                for( auto c : mp){
                    maxfreq = max( maxfreq , c.second); 
                    minfreq = min( minfreq , c.second); 
                }
                count+= (maxfreq - minfreq ) ; 

            }

        }
        return count; 
    }
};