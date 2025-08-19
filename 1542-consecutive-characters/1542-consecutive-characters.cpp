class Solution {
public:
    int maxPower(string s) {
        int n = s.size(); 
        int count = 1; 
        int maxi = 1; 

        for( int i =1; i< n ; i++){
            if( s[i] == s[i-1]){
                count+=1; 
                maxi = max(maxi,count); 
            }
            else count =1 ; 
        }
        return maxi;
        
    }
};