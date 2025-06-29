class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        vector<int>ans(nums.size()); 
        int low = 1;
        int high = nums.size()-1; 

        while(low< nums.size()){
            ans[low] = nums[high]; 
            high--; 
            low+=2;
        } 
        low = 0; 
        while( low< nums.size()){
            ans[low] = nums[high]; 
            high--;
            low+=2; 
        }
        for( int i =0 ; i< nums.size() ; i++){
            nums[i] = ans[i]; 
        }
      

        
    }
};