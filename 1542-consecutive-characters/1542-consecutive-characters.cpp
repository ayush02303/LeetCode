class Solution {
public:
    int maxPower(string s) {
        int count = 1; 
        int maxi = 1; 
        int n = s.size(); 

        for( int i = 1 ;i< n ; i++){
            if( s[i] == s[i-1]){
                count+=1; 
                maxi = max(maxi,count); 
            }
            else count = 1; 
        }
        return maxi;
        
    }
};