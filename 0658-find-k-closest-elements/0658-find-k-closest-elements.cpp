class Solution {
public:
    typedef pair<int,int>P; 
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<P>pq; 

        for( auto it : arr){
            pq.push({ abs(it- x), it}); 

            if( pq.size() > k) pq.pop(); 

        } 
        vector<int>ans; 

        while(!pq.empty()){
            ans.push_back(pq.top().second); 
            pq.pop(); 

        }
        sort(ans.begin(), ans.end()); 
        return ans ; 
        
    }
};