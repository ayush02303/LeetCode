class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< string, vector<string>>mp; 
        for( auto num : strs){
            string temp = num; 
            sort( temp.begin(),temp.end()); // sorts the temp 
            mp[temp].push_back(num);
        }
        vector<vector<string>>ans; 

        for( auto it : mp){
            ans.push_back(it.second); 
        }
        return ans; 
        
    }
};