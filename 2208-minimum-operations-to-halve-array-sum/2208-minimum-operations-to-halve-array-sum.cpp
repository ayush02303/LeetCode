class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double >pq; 
        double sum = 0 ; 
        for( auto x : nums){
            sum+=x; 
            pq.push(x); 
        }
        double  target = sum/2.0; 
        int operations = 0; 

        while( sum > target ){
            double ele = pq.top(); 
            double  half = ele/2.0;
            pq.pop(); 
            sum-= half; 

            pq.push(half); 
            operations++ ;  

        }
        return operations;


        
    }
};