class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int total = 0;
        for( int i = 0 ; i< arr.length ; i++){
            int sum = 0; 
            for( int j = i ; j< arr.length ; j++){
                sum+= arr[j]; 
                if((j-i+1)%2 == 1) total+=sum; 
            }
        }
        return total;
    }
}