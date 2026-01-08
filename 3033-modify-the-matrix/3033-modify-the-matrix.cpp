class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < m; i++){
            int maxrow = 0;
            for(int j = 0 ; j < n ; j++){
                 if(maxrow <  matrix[j][i]) maxrow = matrix[j][i];
                
            }
            for(int k =0; k<n ; k++){
                if(matrix[k][i] == -1) matrix[k][i] = maxrow;
            }
           
        }
        return matrix;
    }
};