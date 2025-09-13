class Solution {
public:
     bool isValid( vector<int> &count){
        return count == vector<int>(26,0); 
    }
    
    vector<int> findAnagrams(string txt, string pat ) {
          // code here
        vector<int>count(26,0); 
        
        for( int i = 0; i < pat.size() ; i++){
            count[ pat[i] - 'a' ]++; 
        }
        
        int i = 0 , j = 0 ; 
        vector<int>ans; 
        
        while( j < txt.size()){
            count[ txt[j] - 'a']--; 
            
            if( j-i+1 == pat.size()){
                if( isValid( count) ) ans.push_back(i);
                
                 count[ txt[i] - 'a']++; 
            i++; 
                
            }
            j++; 
           
        }
        return ans;
        
    }
};