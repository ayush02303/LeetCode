class Solution {
public:
    int maxDepth(string s) {
        int res = 0, count=0;

        for( auto c : s){
            if(c == '('){
                count+=1; 
                res = max(res,count);
            }
            if( c == ')') count--; 
        }
        return res ;
        
    }
};