class Solution {
public:
    int subtractProductAndSum(int n) {
         int temp= n; 
        int psum=1;
        int dsum=0; 

         while(temp!=0)
         {
            int rem = temp%10; 
            psum*=rem; 
            dsum+=rem; 

            temp/=10;
         } 
        int answer= psum-dsum;
        return answer;
        
    }
};