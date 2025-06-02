class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN ;
        for( int i =0 ; i< sentences.size() ; i++){
             int word =0; 
             for( auto num : sentences[i]){
                if (num ==' ') word+=1;   

             }
             maxi = max(word,maxi); 
        }
        return maxi+1 ;
    }
};