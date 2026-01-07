class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int srow = 0, erow = n - 1;

        while (srow <= erow) {
            int mid = srow + (erow - srow) / 2;

            if (matrix[mid][0] <= target && matrix[mid][m - 1] >= target) {
                return searchRow(matrix, target, mid);
            } else if (matrix[mid][0] > target) {
                erow = mid - 1;
            } else {
                srow = mid + 1;
            }
        }
        return false;
    }

private:
    bool searchRow(vector<vector<int>>& matrix, int target, int row) {
        int l = 0, r = matrix[0].size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
};
