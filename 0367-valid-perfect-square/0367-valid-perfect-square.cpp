class Solution {
public:
    bool isPerfectSquare(int num) {
        if( num < 0) return false; 
        if( num == 1 || num == 0) return true; 

        int low = 1; 
        int high = num; 

        while( low<= high){
            int mid = low+(high-low)/2; 

            if( (long)mid*mid == num) return true; 
            else if( (long long)mid*mid < num ) low = mid+1; 
            else high = mid-1; 
        }
        return false;
        
    }
};