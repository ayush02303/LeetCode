class Solution {
    public int numRescueBoats(int[] people, int limit) {
         int n = people.length; 
        int low = 0; 
        int high = n-1; 
        int boats = 0; 
        Arrays.sort(people);
        while( low<= high){
            if( people[low] + people[high] <= limit){
                low++; high--; 
                boats+=1; 
            }
            else{
                high--; 
                boats+=1; 
            }
        }
        return boats;
        
    }
}