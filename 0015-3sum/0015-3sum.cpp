class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>>st; 
        for( int i = 0 ; i< nums.size() ; i++){
            if( i>0 && nums[i] == nums[i-1]) continue; 
            int low = i+1; 
            int high = nums.size()-1; 
            int sum = 0; 


            while( low < high){
                sum = nums[i]+ nums[low]+ nums[high]; 
                if( sum < 0) low++; 
                else if( sum > 0) high--; 
                else{
                    st.insert({nums[low], nums[high], nums[i]}); 
                    low++; 
                    high--; 

                }

            }



        }
        return vector<vector<int>>(st.begin(), st.end()); 
    }
};