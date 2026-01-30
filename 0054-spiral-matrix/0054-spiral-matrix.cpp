class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {}; 
        // if(matrix.size() == 0) return {}; 
        vector<int>ans; 

        int left = 0; 
        int top = 0; 
        int right = matrix[0].size()-1; 
        int bottom = matrix.size()-1; 
        int id = 0; 


        while( left<= right && top<= bottom){

            if( id == 0){
                for( int i = left ; i<= right ; i++){
                    ans.push_back(matrix[top][i]); 
                }
                top++;
            }

            if( id == 1){
                for( int i = top ; i<= bottom ; i++){
                    ans.push_back(matrix[i][right]); 
                }
                right--; 

            }
            if( id == 2){
                for( int i = right ; i>= left ; i--){
                    ans.push_back(matrix[bottom][i]); 
                }
                bottom--; 

            }
            if( id == 3){
                for( int i = bottom ; i>= top ; i--){
                    ans.push_back(matrix[i][left]); 
                }
                left++; 

            }
            id+=1; 
            if( id == 4) id = 0;  


        }
        return ans ; 


        
    }
};