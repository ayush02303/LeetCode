class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
          int n = arr.size(); 
        vector<int>ans;
        
        unordered_map<int,int>mp;
        
        for( auto num : arr){
            mp[num]++; 
        }
        
        for( auto num : mp){
            if( num.second > n/3) ans.push_back(num.first); 
        }
        sort(ans.begin(),ans.end()); 
        return ans;
        
    }
};