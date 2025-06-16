class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy = arr; 
        sort(copy.begin(),copy.end()); 

        unordered_map<int,int>mp; 
        int rank = 1; 
        for( int num : copy){
            if( mp.count(num) == 0) mp[num] = rank++; 
        }
        vector<int>ans; 
        for( int ele : arr){
            ans.push_back(mp[ele]);
        }
        return ans;
    }
};