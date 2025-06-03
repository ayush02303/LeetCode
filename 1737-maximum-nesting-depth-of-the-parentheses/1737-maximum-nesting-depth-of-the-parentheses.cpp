class Solution {
public:
    int maxDepth(string s) {
        int res=0,count=0; 

        for( char c : s){
            if(c == '(') count++; 
            else if( c == ')') count--; 

            res = max(res,count); 
        }
        return res; 
    }
};