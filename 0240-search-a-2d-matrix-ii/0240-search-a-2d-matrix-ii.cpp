class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int r = m - 1;
        for (int i = 0; i < n; i++) {
            int l = 0;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (matrix[i][mid] == target)
                    return true;
                if (matrix[i][mid] > target) {
                    r = mid - 1;
                } else
                    l = mid + 1;
            }
        }
        return false;
    }
};