class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size(); 
        int low = 0; 
        int high = n-1; 
        int boats = 0; 
        sort(people.begin(),people.end()); 
        while( low<= high){
            if( people[i] + people[j] <= limit){
                i++; j--; 
                boats+=1; 
            }
            else{
                j--; 
                boats+=1; 
            }
        }
        return boats;
    }
};