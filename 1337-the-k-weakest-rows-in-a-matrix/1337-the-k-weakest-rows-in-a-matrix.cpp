class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans(k);
        vector<pair<int,int>> rows;

        for(int i = 0; i < mat.size(); i++){
            int soldiers = 0;

            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1)
                    soldiers++;
            }

            rows.push_back({soldiers, i});
        }

        sort(rows.begin(), rows.end());

        for(int i = 0; i < k; i++){
            ans[i] = rows[i].second;
        }

        return ans;
    }
};