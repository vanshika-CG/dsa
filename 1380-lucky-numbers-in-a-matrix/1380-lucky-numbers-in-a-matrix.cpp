class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> rowmin(n);
        vector<int> colmax(m);

        for (int i = 0; i < n; i++) {
            int minval = INT_MAX;
            for (int j = 0; j < m; j++) {
                minval = min(minval, matrix[i][j]);
            }
            rowmin[i] = minval;
        }

        for (int j = 0; j < m; j++) {
            int maxval = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxval = max(maxval, matrix[i][j]);
            }
            colmax[j] = maxval;
        }

        unordered_set<int> st(colmax.begin(), colmax.end());
        vector<int> ans;

        for (int x : rowmin) {
            if (st.count(x))
                ans.push_back(x);
        }
        return ans;
    }
};