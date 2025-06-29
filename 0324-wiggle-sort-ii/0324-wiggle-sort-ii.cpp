class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        int n = nums.size(); 
        vector<int>ans(n); 
        int low = 1; 
        int high =  n-1; 

        while(low< n){
            ans[low] = nums[high--] ;   
            low+=2;  
        }
        low = 0; 
        while( low<n){
            ans[low] = nums[high--];
            low+=2;  
        }
        for( int i = 0; i< n ; i++){
            nums[i] = ans[i];
        }
        
    }
};