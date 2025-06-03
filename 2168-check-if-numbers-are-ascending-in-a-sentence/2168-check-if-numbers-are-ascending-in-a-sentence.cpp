class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s); 
        string word ; 
        int prev =0,curr=0; 

        while( ss >> word){
            if( isdigit(word[0])){
                curr = stoi(word); 
                if( curr <= prev) return false; 

                prev= curr;

            }
        }
        return true ;
    }
};