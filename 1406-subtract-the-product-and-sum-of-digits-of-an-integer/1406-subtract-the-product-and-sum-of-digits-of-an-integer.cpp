class Solution {
public:
    int subtractProductAndSum(int n) {
        int p =1 , s=0; 
        int temp = n ; 
        while( temp !=0){
            int rem = temp%10 ; 
            p *= rem ; 
            s += rem ; 

            temp/=10; 
        }
        return p-s; 
        
    }
};