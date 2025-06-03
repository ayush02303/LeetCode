class Solution {
public:
    int myAtoi(string s) {
        if(s.size() == 0) return 0; 
        int n = s.size(); 
        int i=0;
        while( i<n && s[i] ==' '){
            i++; 
        }
        s= s.substr(i); 
        // done with removing all leading spaces

        int sign = +1; 
        long ans =0; 
        if( s[0] == '-') sign = -1; 

        int MAX = INT_MAX ; int MIN = INT_MIN; 
          i = (s[0] == '+' || s[0] == '-') ? 1 : 0;

         // while(i<n && s[i] != ' '){}
            while(i < s.length()) {
            if(s[0] == ' ' || !isdigit(s[i])) break;
            
            ans = ans * 10 + s[i]-'0';
            if(sign == -1 && -1*ans < MIN) return MIN;
            if(sign == 1 && ans > MAX) return MAX;
            
            i++;
        }
        return (int)sign*ans; 
            

        
    }
};