class Solution {
public:
    int compress(vector<char>& s) {
        int index = 0;
        int i = 0; 
        int n = s.size();
        

        while( i<n){
            char curr = s[i]; 
            int count = 0; 

            while( i< n && s[i] == curr){
                count+=1; 
                i++;
            }
            s[index] = curr; 
            index++;

            if( count>1){
                string count_str = to_string(count); 

                for( char c : count_str){
                    s[index] = c; 
                    index++;
                }
            }
        }
        return index;
    }
};