class Solution {
public:
    int maxPower(string s) {
        int n = s.size(); 
        int maxi = 1; 
        int count = 1; 

        for( int i =1; i< n ; i++){
            if( s[i] == s[i-1]){
                count+=1; 
                maxi = max(count,maxi); 
            }
            else count = 1; 
        }
        return maxi;
    }
};