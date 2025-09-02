class Solution {
public:
    void isValid( string word , int count[26]){
        for( auto ch : word){
            count[ ch - 'a']++; 
        }

    }
    vector<string> commonChars(vector<string>& words) {
        int count[26] = {0}; 
        isValid( words[0], count);

        for( int i =1 ; i < words.size() ; i++){
            int temp[26] = {0};
            isValid( words[i], temp);

            for( int i = 0; i < 26 ; i++){
                if( count[i] != temp[i]) count[i] = min( count[i], temp[i]);
            }
        }

        vector<string>result; 

        for( int i = 0; i< 26 ; i++){
            if( count[i]!= 0){
                while( count[i]--){
                    result.push_back( string( 1, i + 'a'));
                }
            }
        }
        return result;
    }
};