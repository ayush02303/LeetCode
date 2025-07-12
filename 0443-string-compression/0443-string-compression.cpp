class Solution {
public:
    int compress(vector<char>& s) {
        int index = 0;
        int i = 0; 
        int n = s.size(); 
        while( i < n){
            char curr = s[i]; 
            int count = 0; 
            while( i < n && s[i] == curr){
                count++; 
                i++;
            }
            s[index] = curr; 
            index++; 

            if( count > 1){
                string next = to_string(count); 

                for( char ch : next){
                    s[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};