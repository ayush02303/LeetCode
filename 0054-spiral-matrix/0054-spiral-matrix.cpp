class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0; 
        int top = 0; 
        int down = matrix.size()-1; 
        int right = matrix[0].size()-1; 

        vector<int>result; 
        int dir =0 ; 

        while( left<= right && top <= down ){
            if( dir == 0){
                for( int i = left ; i<= right ; i++){
                    result.push_back(matrix[top][i]); 
                } 
                top++; 
            }
            if( dir == 1){
                for(int i = top ; i <= down ; i++ ){
                    result.push_back(matrix[i][right]); 
                }
                right--; 
            }

            if( dir == 2){
                for( int i = right; i>= left ; i-- ){
                    result.push_back( matrix[down][i]); 
                } 
                down-- ; 

            }
            if( dir == 3){
                for( int i = down ; i>= top ;i-- ){
                    result.push_back( matrix[i][left]); 
                }
                left++; 

            }
            dir+=1; 
            if( dir == 4) dir = 0 ; 


        }
        return result; 
        
    }
};