class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>st; 
        vector<int>ans; 

        for( auto num: nums){
            if(st[num] < 2){
                ans.push_back(num);
            }
            st[num]++; 
        }
        nums= ans; 
        return ans.size(); 
        
    }
};