class Solution {
public:
    int maxdept = 0;

    void dfs(int node, int parent, int dept, vector<vector<int>>& adj) {
        maxdept = max(maxdept, dept);

        for (int nei : adj[node]) {
            if (nei != parent) {
                dfs(nei, node, dept + 1, adj);
            }
        }
    }

    long long power(long long a, long long b) {
        const int MOD = 1e9 + 7;
        long long ans = 1;

        while (b) {
            if (b & 1)
                ans = (ans * a) % MOD;

            a = (a * a) % MOD;
            b >>= 1;
        }

        return ans;
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n + 1);

        for (auto e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(1, 0, 0, adj);

        return power(2, maxdept - 1);
    }
};