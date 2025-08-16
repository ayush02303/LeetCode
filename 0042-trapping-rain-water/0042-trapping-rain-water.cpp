class Solution {
public:
    int trap(vector<int>& arr) {
         // code here
        int n = arr.size(); 
        vector<int>rmax(n); 
        vector<int>lmax(n); 
        
        rmax[n-1] = arr[n-1]; 
        lmax[0] = arr[0]; 
        
        for( int i = 1 ; i< n ; i++){
            lmax[i] = max(lmax[i-1], arr[i]);
            
        }
        
         for( int i = n-2 ; i >= 0 ; i--){
            rmax[i] = max(rmax[i+1], arr[i]);
            
        }
        int ans = 0; 
        
        for( int i = 0 ; i<n; i++){
            ans +=  min( lmax[i], rmax[i]) - arr[i]; 
        }
        return ans;
        
    }
};