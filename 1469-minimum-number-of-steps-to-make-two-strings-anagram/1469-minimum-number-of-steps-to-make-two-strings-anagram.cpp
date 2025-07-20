class Solution {
public:
    int minSteps(string s, string t) {
        
        int n = s.size(); 
        int arr1[26] = {0}; 
        int arr2[26] = {0}; 

        for( int i = 0 ; i< n ; i++){
            arr1[s[i] - 'a']++; 
            arr2[t[i] - 'a']++; 
        }

        int result = 0 ; 

        for( int i = 0 ; i< 26 ; i++){
           if( arr1[i] > arr2[i]) result += arr1[i] - arr2[i];
        }
        return result; 
    }
};