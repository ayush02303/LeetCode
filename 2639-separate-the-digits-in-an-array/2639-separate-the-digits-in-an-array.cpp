class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result; 

        for( int i = 0 ; i< nums.size() ; i++){
            string digit = to_string( nums[i]); 

            for( char c : digit) result.push_back( c - '0'); // converting string to int
        }
        return result;
    }
};