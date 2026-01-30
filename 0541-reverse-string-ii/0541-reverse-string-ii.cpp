class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        if (n == 1)
            return s;

        for (int i = 0; i < n; i += 2 * k) {
            reverse(s.begin() + i, s.begin() + min(i + k, n));
        }
        return s;
    }
};