class Solution {
    public int findMaxLength(int[] nums) {
        int maxlen =0; 
        int sum =0; 
        Map<Integer,Integer>mp = new HashMap<>(); 
        mp.put(0,-1);

        for( int i =0 ; i< nums.length; i++){
            sum+=(nums[i] == 0)? -1 : 1 ; 

            if(mp.containsKey(sum)) maxlen = Math.max(maxlen,i - mp.get(sum));
            else mp.put(sum,i);
        }
        return maxlen;
    }
}