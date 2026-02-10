class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        vector<int> ans;
        unordered_map<int, int> m;

        for (int num : nums)
            m[num]++;

        for (auto p : m) {
            buckets[p.second].push_back(p.first);
        }

        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);
            }
            if (ans.size() == k)
                break;
        }
        return ans;
    }
};