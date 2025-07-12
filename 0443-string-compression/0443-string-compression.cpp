class Solution {
public:
    int compress(vector<char>& s) {
        int index = 0; 
        int i = 0; 
        int n = s.size(); 

        while( i < n){
            int count = 0;
            char curr = s[i]; 

            while( i < n && s[i] == curr){
                count++; 
                i++;
            }
            s[index] = curr;
            index++; 

            if( count>1){
                string nxt = to_string(count); 

                for( char ch : nxt ){
                    s[index] = ch;
                    index++; 
                }
            }
        }
        return index;
    }
};