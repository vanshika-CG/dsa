class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // this loop is for measuring the height of column (that is which cell
        // have 1)
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1)
                    matrix[i][j] += matrix[i - 1][j];
            }
        }

        int area = 0;

        // this loop is calculating maximum area height * width
        for (int i = 0; i < n; i++) {
            vector<int> row = matrix[i];
            sort(row.begin(), row.end(), greater<int>());

            for (int j = 0; j < m; j++) {
                area = max(area, row[j] * (j + 1));
            }
        }
        return area;
    }
};