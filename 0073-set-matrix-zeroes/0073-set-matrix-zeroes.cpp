class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        int m = matrix[0].size(); 

        vector<int>rows(n ,false); 
        vector<int>cols(m,false); 

        for( int i = 0 ; i< n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( matrix[i][j] == 0){
                    rows[i] = true; 
                    cols[j] = true; 
                }


            }
        }

        for( int i = 0 ; i< n ; i++){
            for( int j = 0 ; j< m ; j++){
                if( rows[i] == true || cols[j] == true){
                    matrix[i][j] = 0 ; 
                }
            }
        }
        
    }
};