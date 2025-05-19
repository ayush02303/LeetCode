class Solution {
public:
    int missingNumber(vector<int>& arr) {
         // code here
        int n= arr.size(); 
        int sum= (n*(n+1))/2; 
        int sum2=0; 
        
        for(int i=0; i<n;i++)
        {
            sum2+=arr[i]; 
        }
        
        int miss= sum-sum2; 
        return miss;
        
    }
};