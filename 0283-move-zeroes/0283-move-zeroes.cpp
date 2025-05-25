class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector<int>ans;

      for(int i=0;i< nums.size();i++){
        if(nums[i] != 0){
            ans.push_back(nums[i]); 
        }
      }
      int i=0; 
      vector<int>ans2(nums.size(),0); 
      for(auto num : ans){
        ans2[i++]= num; 
      }
      nums=ans2; 
      
      
        
        
    }
};