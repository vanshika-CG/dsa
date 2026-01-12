class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        int n = points.size();
        int m = points[0].size();

        for (int i = 0; i < n - 1; i++) {
            time += max(abs(points[i][0] - points[i + 1][0]),
                       abs(points[i][1] - points[i + 1][1]));
        }
        return time;
    }
};