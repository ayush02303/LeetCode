class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0; 
        int oneCount = 0; 
        int twoCount = 0; 

        for( auto x : nums){
            if( x == 0) zeroCount++; 
            else if(x == 1) oneCount++; 
            else twoCount++; 
         }

         int i = 0 ; 

         while(zeroCount){
            nums[i] = 0; 
            i++ ; 
            zeroCount--; 
         }

        while(oneCount){
            nums[i] = 1; 
            i++; 
            oneCount--; 
        }
        while(twoCount){
            nums[i] = 2; 
            i++; 
            twoCount--; 
        }

        
    }
};