class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()); 
        vector<vector<int>>result; 
        long long  sum = 0; 

        for( int i = 0 ; i< nums.size() ; i++){
            if( i>0 && nums[i] == nums[i-1] ) continue; 
            for( int j = i+1 ; j< nums.size() ; j++){
                if( j> i+1 && nums[j] == nums[j-1]) continue; 
                int low = j+1 ; 
                int high = nums.size()-1; 

                while( low < high ){
                    sum = (long long )nums[i]+ nums[j]+ nums[low]+ nums[high]; 
                    if( sum > target ) high-- ; 
                    else if( sum < target  ) low++; 
                    else{
                        result.push_back({ nums[i], nums[j], nums[low], nums[high]}); 
                        low++; 
                        high--; 

                        while( low < high && nums[low ] == nums[low-1]) low++; 
                        while( low < high && nums[high] == nums[high+1] )high-- ; 
                    }
                }

            } 
        }
        return result; 
    }
};