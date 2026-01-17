class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq; 
        int sum = 0; 

        for( int x : piles){
            pq.push(x); 
            sum+=x;
        }

        for( int i = 1 ; i <= k ; i++){
            int ele = pq.top(); 
            pq.pop(); 
            int remove = ele/2; 

            sum-= remove; 

            int updatedval = ele-remove; 
            pq.push(updatedval);

        }
        return sum; 
        
    }
};