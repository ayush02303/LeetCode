class Solution {
public:
    int beautySum(string s) {
        int beauty =0; 
        int n = s.length(); 

        for( int i =0 ; i<n ;i++){

            unordered_map<char,int>mp; 
            for(int j = i ; j< n ;j++){
                mp[s[j]]++; 

                int m = 0, l = INT_MAX; 
                for( auto c : mp){
                    m = max( m,c.second); 
                    l = min(l,c.second); 
                }
                beauty+= m-l; 
                
            }
        }
        return beauty; 
    }
};