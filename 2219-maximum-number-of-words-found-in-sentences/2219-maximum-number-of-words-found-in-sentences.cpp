class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxi = INT_MIN; 
        for( int i=0; i< s.size() ; i++){
            int curr_sum=0; 
            for( auto c : s[i]){
                if(c == ' '){
                    curr_sum+=1; 
                }
                maxi = max(maxi,curr_sum); 
            }

        }
        return maxi+1;
        
    }
};