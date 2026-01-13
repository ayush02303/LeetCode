class Solution {
public:
    typedef pair<int,int>P; 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp; 

        for( auto x : nums){
            mp[x]++; 
        }
        priority_queue< P, vector<P>, greater<P>>pq; 

        for( auto itr : mp){
            pq.push( {itr.second , itr.first}); 

            if( pq.size() > k) pq.pop(); 
        }

        vector<int>ans; 
        while(!pq.empty()){
            ans.push_back(pq.top().second); 
            pq.pop(); 
        }
        return ans;
        
    }
};