class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>,
                       less<pair<int, vector<int>>>>
            pq;

        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];

            int dis = (x * x) + (y * y);

            pq.push({dis, {x, y}});

            if (pq.size() > k)
                pq.pop();
        }

        vector<vector<int>> ans;

        while (pq.size() > 0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};