class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq; 
        double sum = 0; 

        for( auto x : nums){
            sum+=x; 
            pq.push(x); 
        }
        int operations = 0 ; 
        double  target  = sum/2.0;


        while( sum > target ){
            double  top = pq.top(); 
            pq.pop();
            double half = top/2.0 ; 

            sum-= half; 
            pq.push(half); 
            operations++;  

        }
        return operations;
        
    }
};