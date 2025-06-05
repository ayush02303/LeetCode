class Solution {
public:
    int maxDepth(string s) {
        int count =0 ; 
        int res = 0; 
         for( auto c : s ){
            if(c == '(' ) {
                count+=1; 
                res = max( count,res); 
                
            }
            if(c == ')') count-=1; 
         }
        return res; 
    }
};