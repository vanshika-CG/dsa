class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;

        for (char c : s)
            m[c]++;

        vector<pair<char, int>> freq(m.begin(), m.end());

        sort(freq.begin(), freq.end(),
             [](auto& a, auto& b) { return a.second > b.second; });

        string ans;

        for (auto& [c, cnt] : freq) {
            ans.append(cnt, c);
        }
        return ans;
    }
};