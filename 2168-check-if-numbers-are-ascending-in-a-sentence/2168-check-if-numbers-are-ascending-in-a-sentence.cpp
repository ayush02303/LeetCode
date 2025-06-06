class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s); 
        string word;
        string curr; 
        string prev; 

        while(ss >> word){
            if( isdigit(word[0])){
                curr = stoi(word); 

                if( curr <= prev) return false;
                 prev = curr; 
            }
           
        } 
        return true; 
    }
};