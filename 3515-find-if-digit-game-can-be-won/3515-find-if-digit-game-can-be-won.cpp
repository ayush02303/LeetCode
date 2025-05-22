class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int count1=0; 
        int count2=0; 

        for(auto num:nums)
        {
            if(num<10) count1+=num; 
            else count2+=num; 
        }
        return count1!=count2;
        
    }
};