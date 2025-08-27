
class Solution {
public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        // Directions: 0=↘(1,1), 1=↙(1,-1), 2=↖(-1,-1), 3=↗(-1,1)
        const int di[4] = {1, 1, -1, -1};
        const int dj[4] = {1, -1, -1, 1};

        auto nextExpect = [](int v)->int {
            if (v == 1) return 2;
            if (v == 2) return 0;
            return 2; // v==0 -> expect 2 next
        };

        // dpOut[d][i][j]: length of valid alternating segment starting at (i,j) going in dir d
        vector<vector<vector<int>>> dpOut(4, vector<vector<int>>(n, vector<int>(m, 1)));

        for (int d = 0; d < 4; ++d) {
            int si = (di[d] == 1 ? n - 1 : 0);
            int ei = (di[d] == 1 ? -1    : n);
            int sj = (dj[d] == 1 ? m - 1 : 0);
            int ej = (dj[d] == 1 ? -1    : m);
            int istep = (di[d] == 1 ? -1 : 1);
            int jstep = (dj[d] == 1 ? -1 : 1);

            for (int i = si; i != ei; i += istep) {
                for (int j = sj; j != ej; j += jstep) {
                    int ni = i + di[d], nj = j + dj[d];
                    dpOut[d][i][j] = 1;
                    if (0 <= ni && ni < n && 0 <= nj && nj < m) {
                        int expv = nextExpect(grid[i][j]);
                        if (grid[ni][nj] == expv) {
                            dpOut[d][i][j] = 1 + dpOut[d][ni][nj];
                        }
                    }
                }
            }
        }

        // runEnd[d][i][j]: best length of a valid segment that ENDS at (i,j) while moving along dir d
        // (it implicitly starts at some 1 earlier on that diagonal)
        vector<vector<vector<int>>> runEnd(4, vector<vector<int>>(n, vector<int>(m, 0)));

        auto inb = [&](int x, int y){ return 0 <= x && x < n && 0 <= y && y < m; };

        auto process_dir = [&](int d) {
            vector<pair<int,int>> starts;
            if (d == 0) { // ↘: starts at top row and left col
                for (int j = 0; j < m; ++j) starts.emplace_back(0, j);
                for (int i = 1; i < n; ++i) starts.emplace_back(i, 0);
            } else if (d == 1) { // ↙: starts at top row and right col
                for (int j = 0; j < m; ++j) starts.emplace_back(0, j);
                for (int i = 1; i < n; ++i) starts.emplace_back(i, m - 1);
            } else if (d == 2) { // ↖: starts at bottom row and right col
                for (int j = 0; j < m; ++j) starts.emplace_back(n - 1, j);
                for (int i = 0; i < n - 1; ++i) starts.emplace_back(i, m - 1);
            } else { // d == 3, ↗: starts at bottom row and left col
                for (int j = 0; j < m; ++j) starts.emplace_back(n - 1, j);
                for (int i = 0; i < n - 1; ++i) starts.emplace_back(i, 0);
            }

            for (auto [si, sj] : starts) {
                int i = si, j = sj;
                int curr = 0;   // current run length ending at previous cell
                int expect = -1; // next value expected (2 or 0) when curr>0
                while (inb(i, j)) {
                    int v = grid[i][j];
                    if (curr == 0) {
                        if (v == 1) { curr = 1; expect = 2; }
                        else { curr = 0; }
                    } else {
                        if (v == expect) {
                            ++curr;
                            expect = (expect == 2 ? 0 : 2);
                        } else if (v == 1) {
                            curr = 1; expect = 2;
                        } else {
                            curr = 0; // broken, and cannot start since v!=1
                        }
                    }
                    runEnd[d][i][j] = curr;
                    i += di[d]; j += dj[d];
                }
            }
        };

        for (int d = 0; d < 4; ++d) process_dir(d);

        // Combine:
        // 1) straight (no turn): start at 1 and go along any dir d => dpOut[d][i][j]
        // 2) one clockwise turn: runEnd[d][i][j] + dpOut[(d+1)%4][i][j] - 1
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    for (int d = 0; d < 4; ++d)
                        ans = max(ans, dpOut[d][i][j]);
                }
                for (int d = 0; d < 4; ++d) {
                    int nd = (d + 1) % 4; // clockwise 90°
                    int left = runEnd[d][i][j];
                    if (left > 0) {
                        ans = max(ans, left + dpOut[nd][i][j] - 1);
                    }
                }
            }
        }
        return ans;
    }
};
