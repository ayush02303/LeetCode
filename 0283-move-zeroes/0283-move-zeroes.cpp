class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ini = 0 ;

        for( int i =0 ; i < nums.size() ; i++){
            if( nums[i] != 0){
                nums[ini] = nums[i]; 
                ini++;  
            }
        } 
        while( ini < nums.size()){
            nums[ini] = 0 ; 
            ini++; 
        }
        
    }
};