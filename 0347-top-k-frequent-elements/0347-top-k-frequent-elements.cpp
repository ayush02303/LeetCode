class Solution {
public:
    typedef pair<int,int>P; 

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for( auto itr : nums){
            mp[itr]++; 
        } 
        priority_queue<P , vector<P> , greater<P>>pq; 

        for( auto it : mp){
            pq.push({it.second, it.first}); 

            if( pq.size() > k ) pq.pop();  
        }

        vector<int>ans; 
        while(!pq.empty()){
            ans.push_back( pq.top().second); 
            pq.pop(); 
        }
        return ans ;
        
        
    }
};