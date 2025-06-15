class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int,int>st; 

        for( auto num : nums){
            if(st.count(num)) return num;

            st.insert(num); 
        }
        return 0;
        
    }
};