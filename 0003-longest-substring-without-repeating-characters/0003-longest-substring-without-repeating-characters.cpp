class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        int len = 0;
        int l = 0;

        for (int i = 0; i < n; i++) {
            if (m.find(s[i]) != m.end())
                l = max(l , m[s[i]] + 1);

            len = max(len, i - l + 1);
            m[s[i]] = i;
        }
        return len;
    }
};