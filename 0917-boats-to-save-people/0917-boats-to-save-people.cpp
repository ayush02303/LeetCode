class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size(); 
        int low = 0; 
        int high = n-1; 
        int boats = 0; 
        sort(people.begin(),people.end()); 
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
};