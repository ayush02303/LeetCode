class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0; 
        
        for( auto num : nums){
            if( (to_string(num).length())%2 ==0  ) count+=1;
        }
        return count;
    }
};