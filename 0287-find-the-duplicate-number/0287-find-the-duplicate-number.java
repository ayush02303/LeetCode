class Solution {
    public int findDuplicate(int[] nums) {
        HashSet<Integer>st = new HashSet<>(); 
        for( int num : nums){
            if(st.contains(num)) return num; 
            else  st.add(num);
        }
        return 0;
        
    }
}