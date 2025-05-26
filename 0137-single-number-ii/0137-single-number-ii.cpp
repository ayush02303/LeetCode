class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>st; 

        for(auto num : nums){
            st[num]++; 
        }

        for(auto num : nums){
            if(st[num] ==1){
                return num; 
            }
        }

        return -1;
    }
};