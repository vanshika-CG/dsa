class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> rank;
        vector<string> ans(n);

        for (int i = 0; i < n; i++) {
            rank.push_back({score[i], i});
        }

        sort(rank.begin(), rank.end(), greater<pair<int, int>>());

        for (int i = 0; i < n; i++) {
            if (i == 0)
                ans[rank[i].second] = "Gold Medal";
            else if (i == 1)
                ans[rank[i].second] = "Silver Medal";
            else if (i == 2)
                ans[rank[i].second] = "Bronze Medal";
            else
                ans[rank[i].second] = to_string(i + 1);
        }
        return ans;
    }
};