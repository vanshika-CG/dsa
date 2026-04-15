class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0, h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (matrix[mid][0] <= target && matrix[mid][m - 1] >= target) {

                int left = 0, right = m - 1;
                while (left <= right) {
                    int midd = left + (right - left) / 2;

                    if (matrix[mid][midd] == target)
                        return true;
                    else if (matrix[mid][midd] > target)
                        right = midd - 1;
                    else
                        left = midd + 1;
                }
                return false;

            } else if (matrix[mid][0] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};