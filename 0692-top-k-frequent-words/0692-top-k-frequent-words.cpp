class Solution {
public:
    struct compare {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) const {
            if (a.first == b.first)
                return a.second < b.second;

            return a.first > b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;

        for (string s : words)
            m[s]++;

        priority_queue<pair<int, string>, vector<pair<int, string>>, compare>
            pq;

        for (auto& p : m) {
            pq.push({p.second, p.first});

            if (pq.size() > k)
                pq.pop();
        }

        vector<string> ans;

        while (pq.size() > 0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};