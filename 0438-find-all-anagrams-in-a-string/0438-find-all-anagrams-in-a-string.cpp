class Solution {
public:
     bool isValid( vector<int>&count){
        return count == vector<int>(26,0); 
    }
    vector<int> findAnagrams(string txt, string pat ) {
          vector<int>count(26,0); 
        
        for( int i = 0 ; i< pat.size() ; i++){
            count[ pat[i] - 'a']++; 
        }
        
        int j = 0, i = 0; 
        vector<int>result; 
        
        while( j< txt.size()){
            count[ txt[j] - 'a']--;
            
            if( j-i+1 == pat.size()){
                if( isValid(count)) result.push_back(i); 
                
                count[txt[i] - 'a']++; 
                i++; 
            } 
            j++;
        }
        return result;
        
    }
};