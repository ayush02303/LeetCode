class Solution {
public:
    
    typedef pair<int,int>P; 
     priority_queue<P , vector<P>, greater<P>>pq; 

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp; 
        
        for( auto x : nums) mp[x]++; 

        // priority_queue<P , vector<P>, greater<P>>pq; 

        for( auto x : mp){
            pq.push({x.second , x.first}); 

            if( pq.size() > k){
                pq.pop(); 
            }
        }
        vector<int>ans; 

        while(!pq.empty()){
            ans.push_back( pq.top().second); 
            pq.pop(); 
        }
        return ans;
        
    }
};