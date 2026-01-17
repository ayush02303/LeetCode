class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<long long >pq ;

        for( auto x : nums){
            pq.push(x); 
        }

        long long score = 0; 

        for( int i = 0 ; i< k ; i++){
            long long top = pq.top(); 
            pq.pop(); 
            score+= top; 
            int val = ceil(top/3.0); 
            pq.push(val); 
        }
        return score; 
        
    }
};