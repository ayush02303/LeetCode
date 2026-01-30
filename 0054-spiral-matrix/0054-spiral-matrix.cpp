class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if( matrix.size() == 0) return {}  ; 
        int m = matrix.size(); 
        int n = matrix[0].size(); 

        vector<int>result;

        int top = 0; 
        int bottom = m-1; 
        int left = 0 ; 
        int right = n-1; 

        int id = 0 ;


        while( top <= bottom && left <= right){


            if( id == 0){
                for( int i = left; i <= right ; i++ ){
                    result.push_back(matrix[top][i]); 
                }
                  top++; 
            }

            if( id == 1){
                for( int i = top ; i<= bottom; i++){
                    result.push_back(matrix[i][right]); 
                }
                right--; 
            }
            if( id == 2){
                for( int i = right ; i >= left ; i--){
                    result.push_back(matrix[bottom][i]); 
                }
                bottom--; 
            }
            if( id == 3){
                for( int i = bottom ; i>= top ; i--){
                    result.push_back(matrix[i][left]); 
                }
                left++; 
            }
            id+=1; 
            if( id == 4) id = 0;

          

        }
        return result; 
    }
};