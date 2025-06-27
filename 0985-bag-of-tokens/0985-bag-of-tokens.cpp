class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end()); 
        int left = 0; 
        int right = tokens.size()-1; 
        int maxScore = 0; 
        int currScore = 0; 

        while( left<= right){
            if( power >= tokens[left]){
                power-=tokens[left++];
                currScore+=1;
                maxScore = max(maxScore,currScore);
            }
            else if( currScore>=1){
                power += tokens[right--]; 
                currScore-=1;
            }
            else break;
        }
        return maxScore;
        
    }
};