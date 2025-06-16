class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp; 
        for( auto num : arr){
            mp[num]++; 
        }
        unordered_set<int>st; 
        for( auto num : mp){
            if( st.count(num.second)) return false; 
            st.insert(num.second); 
        }
        return true;
    }
};