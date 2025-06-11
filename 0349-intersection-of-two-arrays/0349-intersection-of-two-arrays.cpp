class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
         unordered_map<int,int>mp; 
        for( int num : a){
            mp[num]++; 
        }
        vector<int>ans; 
        for( auto num : b){
            if(mp.find(num) != mp.end()){
                ans.push_back(num); 
                //mp[num] =-1;
                mp.erase(num);
            }
        }
        return ans; 
        
    }
};