class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i= nums.size()-1 ; i>=0 ;i--){
            if(nums[i] < 9){
                nums[i]+=1; 
                return nums; 
            }
            else{
                nums[i]=0; 
            }
        }
        nums.push_back(0); 
        nums[0]=1; 
        return nums; 
    }
};