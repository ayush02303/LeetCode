class Solution {
public:
     bool isVowel(char &ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int i = 0, j = 0; 
        int n = s.size(); 
        int count = 0; 
        int maxi = 0; 

        while( j < n){
            if( isVowel(s[j])) count+=1; 

            if( j-i+1 == k){
                maxi = max(maxi,count); 

                if( isVowel(s[i])) count--; 
                i++; 


            }
            j++; 
        }
        return maxi;
    }
};