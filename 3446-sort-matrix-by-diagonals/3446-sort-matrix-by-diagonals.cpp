class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, vector<int>> diag;

        // Step 1: collect diagonals
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                diag[i - j].push_back(grid[i][j]);
            }
        }

        // Step 2: sort each diagonal
        for (auto &p : diag) {
            if (p.first >= 0) {
                sort(p.second.begin(), p.second.end(), greater<int>()); // bottom-left (descending)
            } else {
                sort(p.second.begin(), p.second.end()); // top-right (ascending)
            }
        }

        // Step 3: put back sorted values
        unordered_map<int, int> idx; // track usage per diagonal
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int d = i - j;
                grid[i][j] = diag[d][idx[d]++];
            }
        }

        return grid;
    }
};
