class Solution {
public:
    int numberOfSubstrings(string s) {
        int c = 0;
        int n = s.size();
        unordered_map<char, int> m;

        int l = 0;

        for (int r = 0; r < n; r++) {
            m[s[r]]++;

            while (m['a'] > 0 && m['b'] > 0 && m['c'] > 0) {
                c += (n - r);
                m[s[l]]--;
                l++;
            }
        }
        return c;
    }
};