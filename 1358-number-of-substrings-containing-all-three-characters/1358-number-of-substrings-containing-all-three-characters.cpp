class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        int ans = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            m[s[i]]++;

            while (m['a'] > 0 && m['b'] > 0 && m['c'] > 0) {
                ans += (n - i);
                m[s[j]]--;
                j++;
            }
        }
        return ans;
    }
};