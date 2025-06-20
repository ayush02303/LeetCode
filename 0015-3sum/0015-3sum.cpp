class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        set<vector<int>>st; 

        for( int i = 0 ; i< nums.size()-2 ; i++){
            int low = i+1; 
            int high = nums.size()-1; 

            while( low< high){
                int sum = nums[i]+nums[low]+nums[high]; 
                if( sum == 0){
                     st.insert({nums[i], nums[low], nums[high]});
                    low+=1; 
                    high -=1;
                }
                else if( sum < 0) low++; 
                else high --;
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
        
    }
};