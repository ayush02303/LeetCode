class Solution {
public:
    int alternateDigitSum(int n) {
        int sign = 1; 
        string digit = to_string(n); 
        int sum = 0; 

        for( char c : digit){
            int a = c - '0'; 
            sum+= a* sign; 
            sign*= -1;
        }
        return sum;
    }
};