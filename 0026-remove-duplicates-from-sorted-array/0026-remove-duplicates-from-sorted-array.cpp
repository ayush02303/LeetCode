class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st; 

        for( auto x : nums){
            st.insert(x); 
        }

        int j =0; 
        for( auto x : st){
            nums[j++] = x; 
        }
        
        return st.size(); 
        
    }
};