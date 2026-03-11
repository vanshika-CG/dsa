class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<pair<int, int>> distance;

        for (int i = 0; i < n; i++) {
            int x =
                (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
            distance.push_back({x, i});
        }

        sort(distance.begin(), distance.end());
        vector<vector<int>> ans;

        for (int i = 0; i < k; i++) {
            int pos = distance[i].second;
            ans.push_back(points[pos]);
        }

        return ans;
    }
};