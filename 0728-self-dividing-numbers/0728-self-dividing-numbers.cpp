class Solution {
public:
    bool isValid( int n){
        int temp = n; 
        while( temp!= 0){
            int rem = temp%10; 
            if( rem == 0 || n%rem != 0) return false;

            temp = temp/10;
        }
        return true;
    };
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans; 
        for( int i = left ; i<= right ; i++){
            if( isValid(i)){
                ans.push_back(i); 
            }
        }
        return ans;
    }
};