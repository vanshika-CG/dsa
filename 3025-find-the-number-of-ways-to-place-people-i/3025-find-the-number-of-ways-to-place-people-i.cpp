class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                auto &A = points[i];
                auto &B = points[j];

                // A must be upper-left of B
                if (A[0] <= B[0] && A[1] >= B[1]) {
                    bool valid = true;

                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue;
                        auto &C = points[k];

                        // Check if C lies inside or on the rectangle formed by A and B
                        if (C[0] >= min(A[0], B[0]) && C[0] <= max(A[0], B[0]) &&
                            C[1] >= min(A[1], B[1]) && C[1] <= max(A[1], B[1])) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) ans++;
                }
            }
        }

        return ans;
    }
};
