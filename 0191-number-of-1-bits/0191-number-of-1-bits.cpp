class Solution {
public:
    int hammingWeight(int n) {
        int count = 0; 

        while( n>0){
            if( n%2 == 1) count+=1; 
            n/=2; 
        }
        return count; 

        
    }
};