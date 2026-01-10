class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

           while( stones.size()>1 ){
            sort( stones.begin() , stones.end()); 
            int val1 = stones.back(); 
            stones.pop_back(); 

            int val2 = stones.back(); 
            stones.pop_back(); 

            int result = abs(val1-val2);
            stones.push_back(result);  

        }
        return stones[0];
        
    }
};